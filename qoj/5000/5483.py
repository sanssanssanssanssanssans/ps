v = list(input())
b = list(input())
v.sort()
b.sort()
result = ""
i = j = 0
while i < len(v) and j < len(b):
    if v[i] < b[j]:
        result += v[i]
        i += 1
    else:
        result += b[j]
        j += 1
while i < len(v):
    result += v[i]
    i += 1
while j < len(b):
    result += b[j]
    j += 1
print(result)