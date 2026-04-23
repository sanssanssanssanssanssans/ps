# ====== module : mypacks.math.consts ======
def infinity(mode: str='min') -> int:
    if mode == 'min':
        return 12345678987654321
    return -12345678987654321

# ====== module : main ======
idx = 1
mx = infinity(mode='max')
for i in range(9):
    n = int(input())
    if mx < n:
        idx = i + 1
        mx = max(mx, n)
print(mx)
print(idx)

