Link: https://codeforces.com/problemset/problem/1213/D2
## Helper code snippet (to see how numbers will transform)
```cpp
for (int x = 1; x <= 111; x++) {
  cout << x << " = ";
  int copy = x;
  while (copy >= 0) {
      copy /= 2;
      cout << copy << " ";
      if (copy == 0)
        break;
  }
  cout << "\n";
}
```
## Analysis
```
one operation:
- set a[i] to floor(a[i] / 2)

goal:
- min no. of operation
- obtain at least k equal numbers

-------------------------

5 3
1 2 2 4 5

1 2 2 2 5

ans: 1

-------------------------

5 3
1 2 3 4 5

1 1 3 4 5
1 1 1 4 5

ans: 2

-------------------------

14 7
2 2 2 3 3 3 3 4 4 5 5 5 8 9

2 2 2 3 3 3 3 2 4 5 5 5 8 9
2 2 2 3 3 3 3 2 2 5 5 5 8 9
2 2 2 3 3 3 3 2 2 2 5 5 8 9
2 2 2 3 3 3 3 2 2 2 2 5 8 9

ans: 4

-------------------------

14 9
1 1 2 3 3 3 4 4 4 5 7 7 8 9

1 1 1 3 3 3 4 4 4 5 7 7 8 9
1 1 1 1 3 3 4 4 4 5 7 7 8 9
1 1 1 1 1 3 4 4 4 5 7 7 8 9
1 1 1 1 1 1 4 4 4 5 7 7 8 9
1 1 1 1 1 1 2 4 4 5 7 7 8 9
1 1 1 1 1 1 1 4 4 5 7 7 8 9
1 1 1 1 1 1 1 2 4 5 7 7 8 9
1 1 1 1 1 1 1 1 4 5 7 7 8 9
1 1 1 1 1 1 1 1 2 5 7 7 8 9
1 1 1 1 1 1 1 1 1 5 7 7 8 9

ans: 10

-------------------------

14 6
1 2 2 2 3 5 6 6 7 7 8 8 9 9

1 2 2 2 3 2 6 6 7 7 8 8 9 9
1 2 2 2 3 2 6 6 7 7 4 8 9 9
1 2 2 2 3 2 6 6 7 7 2 8 9 9
1 2 2 2 3 2 6 6 7 7 2 4 9 9
1 2 2 2 3 2 6 6 7 7 2 2 9 9

ans: 5

------------------

we can sort it since the positions don't matter

maybe while dividing a[i] by 2
we're doing something with the values
```
