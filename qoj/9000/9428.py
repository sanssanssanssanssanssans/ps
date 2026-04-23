t, *inputs = open(0)
s = set()
accumulate = 0
for i in range(0, 10101010):
    accumulate ^= i
    if accumulate == 0:
        s.add(i + 1)
for _ in inputs:
    x = int(_)
    result = []
    if x in s:
        print("impossible")
        continue
    for i in range(1, x+1):
        if i in s:
            result.append(i)
        elif i-1 in s:
            result.append(i-2)
        else:
            result.append(i-1)
    print(*result)