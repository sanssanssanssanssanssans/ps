n,arrs, xy = open(0)
n = int(n)
arr = [int(x) for x in arrs.split()]
x, y = map(int, xy.split())
print(*(arr[:x] + sorted(arr[x:y]) + arr[y:]))
print(*sorted(arr))