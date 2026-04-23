# ====== module : mypacks.math.sieve ======
from typing import List

class SieveReturnClass:
    __slots__ = ('n', 'is_prime', 'primes', 'spf')

    def __init__(self, n, is_prime, primes, spf) -> None:
        self.n = n
        self.is_prime = is_prime
        self.primes = primes
        self.spf = spf

    def isPrime(self, x: int) -> bool:
        return self.is_prime[x]

class Sieve:
    """
    
    N의 에라토스테네스 체를 구하는 함수.
    N은 양의 정수이여야함. 
    시간복잡도 : O(N log log N)
    
    """
    __slots__ = ()

    @staticmethod
    def build(n: int) -> SieveReturnClass:
        if n < 2:
            return SieveReturnClass(n, bytearray(n + 1), [], [0] * (n + 1))
        is_prime = bytearray(b'\x01') * (n + 1)
        is_prime[0] = is_prime[1] = 0
        primes: List[int] = []
        spf: List[int] = [0] * (n + 1)
        for i in range(2, n + 1):
            if is_prime[i]:
                primes.append(i)
                spf[i] = i
            for p in primes:
                x = i * p
                if x > n:
                    break
                is_prime[x] = 0
                spf[x] = p
                if i % p == 0:
                    break
        return SieveReturnClass(n, is_prime, primes, spf)

# ====== module : main ======
n, m, k = map(int, input().split())
isp = Sieve().build(m).is_prime
cnt = 0
for i in range(1, m + 1):
    if isp[i] and (i - 1) % n == k:
        cnt += 1
print(cnt)

