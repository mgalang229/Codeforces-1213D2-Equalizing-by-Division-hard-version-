#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int mx = *max_element(a, a + n);
	int freq[mx+1], ops[mx+1];
	memset(ops, 0, sizeof(ops));
	memset(freq, 0, sizeof(freq));
	int mn = INT_MAX;
	for (int& x : a) {
		int cur = 0;
		while (x >= 0) {
			freq[x]++;
			ops[x] += cur;
			if (freq[x] == k)
				mn = min(mn, ops[x]);
			if (x == 0)
				break;
			x /= 2;
			cur++;
		}
	}
	cout << mn << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	// cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
