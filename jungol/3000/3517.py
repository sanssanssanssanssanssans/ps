# ====== module : mypacks.data_structures.binary_search ======
from typing import Callable, Sequence, TypeVar
T = TypeVar('T')

def binary_search(left: int, right: int, arr: Sequence[T], target: T) -> int:
    while left <= right:
        mid = left + right >> 1
        if arr[mid] == target:
            return mid
        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

# ====== module : main ======
input = lambda: __import__('sys').stdin.readline().rstrip()
n = int(input())
l = sorted([*map(int, input().split())])
q = int(input())
for x in [*map(int, input().split())]:
    print(binary_search(0, len(l) - 1, l, x), end=' ')

