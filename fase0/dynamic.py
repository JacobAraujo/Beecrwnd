entrada = input().strip().split(' ')

num = int(entrada[0])
numCasos = int(entrada[1])

numeros = input().strip().split(' ')
numeros = [int(val) for val in numeros]


vetor = numeros
numeros.sort()

for i in range(numCasos):
    cont = 0
    entrada = input().strip().split(' ')
    if int(entrada[0]) == 1 and int(entrada[1]) not in vetor:
        if int(entrada[1]) > numeros[-1]:
            vetor.append(int(entrada[1]))
            numeros.append(int(entrada[1]))
        elif int(entrada[1]) not in vetor:
            for c in numeros:
                if c > int(entrada[1]):
                    menorelementomaiorquek = c
                    break
            vetor[vetor.index(menorelementomaiorquek)] = int(entrada[1])
    if int(entrada[0]) == 2:
        for c in numeros:
            if c > int(entrada[2]):
                print(cont)
                break
            if c >= int(entrada[1]):
                cont += 1