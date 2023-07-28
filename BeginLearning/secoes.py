num = int(input())

secoes = input().split(' ')
secoes = [int(val) for val in secoes]

metade = sum(secoes)/2
soma = 0
for i in range(num-1):
    soma += secoes[i]
    if soma == metade:
        print(i+1)
        break