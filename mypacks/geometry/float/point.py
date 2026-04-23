from __future__ import annotations
from dataclasses import dataclass
from math import hypot

@dataclass(frozen = True)
class Point:
    x : float
    y : float
    def __add__(self, other : Point) -> Point : return Point(self.x + other.x, self.y + other.y)
    def __sub__(self, other : Point) -> Point : return Point(self.x - other.x, self.y - other.y)
    def __mul__(self, k : float)  -> Point : return Point(self.x * k, self.y * k)
    def __rmul__(self, k : float) -> Point : return self * k
    def __truediv__(self, k : float) -> Point : return Point(self.x / k, self.y / k)
    def dot(self, other : Point) -> float : return self.x * other.x + self.y * other.y
    def cross(self, other : Point) -> float : return self.x * other.y - self.y * other.x
    def norm2(self) -> float : return self.x * self.x + self.y * self.y
    def norm(self) -> float : return hypot(self.x, self.y)
    def dist2(self, other : Point) -> float : return (self - other).norm2()
    def dist(self, other : Point) -> float : return (self - other).norm()
    def rotate(self) -> Point : return Point(-self.y, self.x)