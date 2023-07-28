from math import floor


matrizEntrada = input().strip().split(' ')

matrixN = int(matrizEntrada[0])
matrizM = int(matrizEntrada[1])

numSensores = int(input().strip())
sensores = []

for i in range(numSensores):
    sensorEntrada = input().strip().split(' ')
    sensorEntrada = [int(val) for val in sensorEntrada]
    sensores.append(sensorEntrada)
    
soma = 0
numComp = 0

for i in range(matrizM):
    for j in range(matrixN):
        for n in range(numSensores):
            setorAltura = False
            setorLargura = False
            if i <= sensores[n][0] + sensores[n][2] and i >= sensores[n][0] - sensores[n][2]:
                setorAltura = True
            if j <= sensores[n][1] + sensores[n][2] and j >= sensores[n][1] - sensores[n][2]:
                setorLargura = True
            if setorLargura and setorAltura:
                soma += 1
            numComp += 1
    
print(floor(soma/(matrixN*matrizM)))
print(numComp)