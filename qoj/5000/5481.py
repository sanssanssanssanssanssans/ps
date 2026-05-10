n = int(input())
l = []
for _ in range(n):
    x = int(input())
    l.append(x)
l.sort(reverse = True)
nujuck = 0
la = -1
sex = 0
for i in range(n):
    sex += l[i]
    if sex >= nujuck:
        la = i + 1
        nujuck += sex
        sex = 0
print(la)