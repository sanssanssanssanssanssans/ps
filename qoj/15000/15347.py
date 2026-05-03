for e in[*open(0)][1:]:
 e=int(e);r=0
 while e:e//=2;r+=e
 print(r)