t, *inputs = open(0)
t = int(t.rstrip())
testcases = [[*map(int, (a,b,x,y))] for a,b,x,y in zip(*[iter(' '.join(inputs).split())]*4)]
for (a,b,x,y) in testcases:
    if a != x and b != y:
        print("No")
    else:
        if (a | x) != a or (b | y) != y:
            print("No")
        else:
            print("Yes")