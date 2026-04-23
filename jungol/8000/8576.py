class Rect:
    __slots__ = (
        "x",
        "y"
    )

    def __init__(self, x : int, y : int) -> None:
        self.x = x
        self.y = y
    
    def __eq__(self, other) -> bool:
        if other.x * other.y == self.x * self.y: 
            return True
        return False
    
    def get_area(self) -> int:
        return self.x * self.y

a, b = (i1 := ([*map(int, input().split())]))[0] + ((i2 := [*map(int, input().split())]))[0], i1[1] + i2[1]
c, d = (i1 := ([*map(int, input().split())]))[0] + ((i2 := [*map(int, input().split())]))[0], i1[1] + i2[1]
r1 = Rect(a, b)
r2 = Rect(c, d)
if r1 == r2:
    print("Same")
elif r1.get_area() < r2.get_area():
    print("Left Small")
else:
    print("Right Small")