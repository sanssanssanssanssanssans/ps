# ====== module : mypacks.math.consts ======
def infinity(mode: str='min') -> int:
    if mode == 'min':
        return 12345678987654321
    return -12345678987654321

# ====== module : main ======
n = int(input())
l = [*map(int, input().split())]
l.sort()
r = infinity()
for i in range(1, n):
    r = min(r, l[i] - l[i - 1])
print(r)

