n = int(input())
print(int.from_bytes(n.to_bytes(4, byteorder = "little"), byteorder = "big"))