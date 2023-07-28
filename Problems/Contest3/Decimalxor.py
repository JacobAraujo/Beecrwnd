n1 = input()
n2 = input()

maisDigitos = max(len(n1), len(n2))
resp = ''

if len(n1) < maisDigitos:
    n1 = '0'* (maisDigitos - len(n1)) + n1
else:
    n2 = '0'* (maisDigitos - len(n2)) + n2

for dig in range(maisDigitos-1, -1, -1):
    if (int(n1[dig]) <= 2 and int(n2[dig]) <= 2) or (int(n1[dig]) >= 7 and int(n2[dig]) >= 7):
        resp = '0' + resp
    else:
        resp = '9' + resp
    
print(resp)