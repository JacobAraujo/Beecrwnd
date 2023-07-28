num = int(input())
valores = input().split(' ')

maiorSequencia = 0
sequencia = 1
valorAnterior = -1
for valor in valores:
    if valor == valorAnterior:
        sequencia += 1
    else:
        sequencia = 1
    if sequencia > maiorSequencia:
        maiorSequencia = sequencia

    valorAnterior = valor

print(maiorSequencia)
