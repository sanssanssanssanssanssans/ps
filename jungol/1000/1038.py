a, op, b = input().rstrip().strip(), input().rstrip().strip(), input().rstrip().strip()
la, lb = len(a) - 1, len(b) - 1
if op == '*':print('1' + '0' * (la + lb))
else:
    if la == lb:print('2' + '0' * la)
    elif la > lb:print('1' + '0' * (la - lb - 1) + '1' + '0' * lb)
    else:print('1' + '0' * (lb - la - 1) + '1' + '0' * la)