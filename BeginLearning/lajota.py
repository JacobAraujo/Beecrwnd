l = int(input())
c = int(input())

tipo2 = (l-1)*2 + (c-1)*2

tipo1 = l*c*2 - 1 - tipo2/2

print(round(tipo1))
print(tipo2)