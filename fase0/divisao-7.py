n = int(input().strip())

while 1:
    if n < 10:
        print(n)
        break
    strn = str(n)
    termMult = int(strn[:-1])
    termAdd = int(strn[-1]) 
    
    n = termMult * 3 + termAdd
    print(n)
    
    if n < 10:
        break