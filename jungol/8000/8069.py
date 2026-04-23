from bisect import bisect_left
input = lambda : __import__("sys").stdin.readline().rstrip()
n, q = map(int, input().split())
l = sorted([*map(int,input().split())])
for _ in range(q):
    x = int(input())
    idx = bisect_left(l, x)
    if idx == n:print(l[-1])
    elif idx == 0:print(l[0])
    else:
        left, right = l[idx - 1], l[idx]
        if abs(left - x) <= abs(right - x):print(left)
        else:print(right)