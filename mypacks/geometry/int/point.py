from __future__ import annotations
from dataclasses import dataclass
from math import hypot

@dataclass(frozen = True)
class Point:
    x : int
    y : int
    def __add__(self, other : Point) -> Point : return Point(self.x + other.x, self.y + other.y)
    def __sub__(self, other : Point) -> Point : return Point(self.x - other.x, self.y - other.y)
    def __mul__(self, k : int)  -> Point : return Point(self.x * k, self.y * k)
    def __rmul__(self, k : int) -> Point : return self * k
    def __truediv__(self, k : int) -> Point : return Point(self.x // k, self.y // k)
    def dot(self, other : Point) -> int : return self.x * other.x + self.y * other.y
    def cross(self, other : Point) -> int : return self.x * other.y - self.y * other.x
    def norm2(self) -> int : return self.x * self.x + self.y * self.y
    def norm(self) -> int : return hypot(self.x, self.y)
    def dist2(self, other : Point) -> int : return (self - other).norm2()
    def dist(self, other : Point) -> int : return (self - other).norm()
    def rotate(self) -> Point : return Point(-self.y, self.x)