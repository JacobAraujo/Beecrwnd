num = int(input())
numeros = input().strip().split(' ')
numeros = [int(val) for val in numeros]

maiorEscadinha = 1
numEscadinha = 1
anterior = numeros[0]
if len(numeros) > 1:
    diferencaAnterior = numeros[1]-numeros[0]
else:
    print(1)
    exit()

diferenca = 0

if len(numeros) >= 3:
    if (numeros[1] - numeros[0]) - (numeros[2] - numeros[1]) != 0:
        diferencaAnterior = 212123
        anterior = 892121

for i in numeros:
    diferenca = i - anterior
    if i - anterior == diferencaAnterior and diferenca >= 0:
        numEscadinha += 1
    else:
        numEscadinha = 0
    if numEscadinha >= maiorEscadinha:
        maiorEscadinha = numEscadinha
    anterior = i
    diferencaAnterior = diferenca

print(maiorEscadinha)
