import math

numAlcance = input().split(' ')
alcance = int(numAlcance[1])


def distancia(a, b):
    return math.sqrt(math.pow(a, 2) + math.pow(b, 2))


arvores = []
for i in range(int(numAlcance[0])):
    coord = input().split(' ')
    arvores.append([int(coord[0]), int(coord[1])])

for i in range(int(numAlcance[0])):
    arvoresTeste = arvores
    arvore = arvores[i]
    while arvoresTeste:

