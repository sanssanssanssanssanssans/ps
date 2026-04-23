class helper:
    __slots__ = ("x", "cmp")

    def __init__(self, x, cmp):
        self.x = x
        self.cmp = cmp
    
    def __lt__(self, other):
        return self.cmp(self.x, other.x)

def cmp_to_key(cmp):
    return lambda x : helper(x, cmp)