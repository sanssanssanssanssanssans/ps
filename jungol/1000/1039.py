def count(n):
    cnt = 0
    for i in range(n + 1):
        for j in range(i, n + 1):
            cnt += 1
    return cnt
n = int(input())
print(count(n))