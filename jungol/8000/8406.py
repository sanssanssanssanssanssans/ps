# ====== module : mypacks.data_structures.dsu ======
from typing import List

class DSU:
    __slots__ = ('n', 'parent', 'size')

    def __init__(self, n: int) -> None:
        self.n = n
        self.parent: List[int] = list(range(n))
        self.size: List[int] = [1] * n

    def find(self, x: int) -> int:
        while self.parent[x] != x:
            self.parent[x] = self.parent[self.parent[x]]
            x = self.parent[x]
        return x

    def union(self, a: int, b: int) -> bool:
        a = self.find(a)
        b = self.find(b)
        if a == b:
            return False
        if self.size[a] < self.size[b]:
            a, b = (b, a)
        self.parent[b] = a
        self.size[a] += self.size[b]
        return True

    def same(self, a: int, b: int) -> bool:
        return self.find(a) == self.find(b)

    def get_size(self, x: int) -> int:
        return self.size[self.find(x)]

# ====== module : main ======
inp = iter(__import__('sys').stdin.buffer.read().split())

def next_int():
    return int(next(inp))
n, m = (next_int(), next_int())
dsu = DSU(n + 1)
for _ in range(m):
    cmd = next_int()
    if cmd == 1:
        x, y = (next_int(), next_int())
        dsu.union(x, y)
    else:
        x = next_int()
        print(dsu.get_size(x))

