from typing import Callable, Sequence, TypeVar
T = TypeVar('T')

def binary_search(
        left : int,
        right : int,
        arr : Sequence[T],
        target : T
) -> int:
    while left <= right:
        mid = (left + right) >> 1
        if arr[mid] == target:
            return mid
        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

def binary_search_compare(
        left : int,
        right : int,
        arr : Sequence[T],
        target : T,
        compare : Callable[[T, T], int]
) -> int:
    while left <= right:
        mid = (left + right) >> 1
        result = compare(arr[mid], target)
        if result == 0:
            return mid
        if result < 0:
            left = mid + 1
        else:
            right = mid - 1
    return -1