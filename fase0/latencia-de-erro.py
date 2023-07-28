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

celulas_no_alcance = {}

for n in range(numSensores):
    for i in range(max(0, sensores[n][0] - sensores[n][2]), min(matrixN, sensores[n][0] + sensores[n][2] + 1)):
        for j in range(max(0, sensores[n][1] - sensores[n][2]), min(matrizM, sensores[n][1] + sensores[n][2] + 1)):
            if (i, j) in celulas_no_alcance:
                celulas_no_alcance[(i, j)] += 1
            else:
                celulas_no_alcance[(i, j)] = 1

soma = sum(celulas_no_alcance.values())

print(floor(soma/(matrixN*matrizM)))