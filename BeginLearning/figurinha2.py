num = input().strip().split(' ')
num = [int(val) for val in num]

numAlbum = num[0]
numCarimbadas = num[1]
numCompradas = num[2]

nada = input().strip().split(' ')

carimbadas = input().strip().split(' ')
carimbadas = [int(val) for val in carimbadas]

compradas = input().strip().split(' ')
compradas = [int(val) for val in compradas]

for i in compradas:
    if i in carimbadas:
        numCarimbadas -= 1

print(numCarimbadas)