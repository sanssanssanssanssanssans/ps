def power(
        n : int,
        exp : int,
        mod : int
) -> int:
    if mod == 0:
        result = 1
        while exp > 0:
            if exp & 1:
                result *= n
            n **= 2
            exp >>= 1
        return result
    if mod == 1: return 0
    n %= mod
    result = 1
    while exp > 0:
        if exp & 1:
            result = (result * n) % mod
        n = (n * n) % mod
        exp >>= 1
    return result