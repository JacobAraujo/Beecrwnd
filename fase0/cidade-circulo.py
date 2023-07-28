entrada = input().strip().split(' ')

numSeg = int(entrada[0])
numEve = int(entrada[1])

eventos = []
seguimentos = [True]*numSeg

for i in range(numEve):
    evento = (input().strip().split(' '))
    if evento[0] == '?':
        inicio = int(evento[1])-1
        fim = int(evento[2])-1
        anda = inicio
        while True:
            if anda > numSeg-1:
                anda = 1
            if not seguimentos[anda]:
                print('impossible')
                break
            if anda == fim:
                print('possible')
                break
            anda += 1
    if evento[0] == '-':
        seguimentos[int(evento[1])] = False
    if evento[0] == '+':
        seguimentos[int(evento[1])] = True
        
    
            
    
    