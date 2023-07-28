numCasos = 1
numMin = 1

while(True): 
    resposta = 0  
    entrada = input().strip().split(' ')

    numCasos = int(entrada[0])
    numMin = int(entrada[1])

    if numCasos == 0 and numMin == 0:
        exit()
    
    numeros = input().strip().split(' ')
    numeros = [int(val) for val in numeros]

    repeticoes = {}
    flag = 0
    for num in numeros:
        for valor in repeticoes.items():
            if num == valor[0]:
                repeticoes[valor[0]] += 1
                flag = 1
                break
        if flag == 0:
            repeticoes[num] = 1
        flag = 0
        
    for quant in repeticoes.values():
        if quant >= numMin:
            resposta += 1

    print(resposta)
