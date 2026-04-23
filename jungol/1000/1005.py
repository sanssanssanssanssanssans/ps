# ====== module : mypacks.math.consts ======
def infinity(mode: str='min') -> int:
    if mode == 'min':
        return 12345678987654321
    return -12345678987654321

# ====== module : mypacks.math.factorize ======
from typing import List

def factorize_naive(n: int) -> List[int]:
    factors: List[int] = []
    d = 2
    while d * d <= n:
        while n % d == 0:
            factors.append(d)
            n //= d
        d += 1
    if n > 1:
        factors.append(n)
    return factors

# ====== module : main ======
result = 0
max_prime = infinity('max')
q = int(input())
while q:
    n = int(input())
    factors = factorize_naive(n)
    if len(factors) == 0:
        q -= 1
        continue
    if max_prime < max(factors):
        max_prime = max(factors)
        result = n
    q -= 1
print(result)

