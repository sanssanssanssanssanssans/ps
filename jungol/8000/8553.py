# ====== module : mypacks.misc.cmp_to_key ======
class helper:
    __slots__ = ('x', 'cmp')

    def __init__(self, x, cmp):
        self.x = x
        self.cmp = cmp

    def __lt__(self, other):
        return self.cmp(self.x, other.x)

def cmp_to_key(cmp):
    return lambda x: helper(x, cmp)

# ====== module : main ======
def compare(a: int, b: int) -> bool:
    if str(a)[-1] == str(b)[-1]:
        if str(a)[-2] == str(b)[-2]:
            return str(a)[-3] < str(b)[-3]
        else:
            return str(a)[-2] < str(b)[-2]
    return str(a)[-1] < str(b)[-1]
n, *arr = map(int, open(0).read().split())
arr.sort(key=cmp_to_key(compare))
print(*arr, sep='\n')

