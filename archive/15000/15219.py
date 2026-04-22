s, = open(0)
s = s.strip()
ret = len(set(s))if not 'i'in s else len(set(s))-1
print(ret)