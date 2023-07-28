n = int(input())
movimentos = input().split(' ')
movimentos = [int(val) for val in movimentos]

moves = [[1, 2], [2, 1], [2, -1], [1, -2], [-1, -2], [-2, -1], [-2, 1], [-1, 2]]
buracos = [[1, 1], [-2, 0], [-3, 0], [-2, 2]]

posicao = [0, 0]
numMoves = 0

for move in movimentos:
    if posicao in buracos:
        break

    posicao[0] += moves[move-1][0]
    posicao[1] += moves[move-1][1]

    numMoves += 1

print(numMoves)





