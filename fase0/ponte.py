entrada = input().strip().split(' ')
len = int(entrada[0])
num = int(entrada[1])

resposta = input()

objetivo = 0
flag = 0
side = 'L'
numCrianca = 0
for i in range(num):
    while True:
        j = objetivo
        if side == resposta[j]:
            if objetivo >= len-1:
                numCrianca = num-i
                flag = 1
                break
            objetivo += 1
            if side == 'R':
                side = 'L'
            else:
                side = 'R'
        else:
            if side == 'R':
                side = 'L'
            else:
                side = 'R'            
            break
    if flag == 1:
        break
print(numCrianca)

