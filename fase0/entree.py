n = int(input())
 
ontem = 's'
antesOntem = 'p'

if n == 1:
    print('100.0 0.0')
    exit()

if n == 2:
    print('0.0 100.0')
    exit()

for i in range(2, n):
    hoje = ontem + antesOntem
    antesOntem = ontem
    ontem = hoje

quantp = 0
quants = 0
for letra in hoje:
    if letra == 'p':
        quantp += 1
    else:
        quants += 1

percp = round((100*quantp/len(hoje)), 8)
percs = round(100-percp, 8)

print(str(percp) + ' ' + str(percs))
    