import sys
it = iter(sys.stdin.buffer.read().split())
def next_int(): return int(next(it))
n = next_int()
arr = [next_int() for _ in range(n)]
x, y = next_int(), next_int()
print(*arr[:x] + arr[x:y+1][::-1] + arr[y+1:])
print(*sorted(arr, reverse = True))