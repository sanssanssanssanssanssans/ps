t, *inputs = open(0)
testcase = []
for i in range(0, len(inputs), 2):
    tup = (inputs[i], inputs[i + 1])
    testcase.append(tup)
for (x,y) in testcase:
    x = x.split('.')
    y = y.split('.')
    numx = [int(n) for n in x]
    numy = [int(n) for n in y]
    if numx == numy:
        print("Equal")
        continue
    flag1 = False
    flag2 = False
    for i in range(len(numx)):
        currentx = numx[i]
        currenty = numy[i]
        if currentx == currenty:
            continue
        if currentx < currenty:
            flag1 = True
            break
        flag2 = True
        break
    if flag1:
        print("B")
    else:
        print("A")