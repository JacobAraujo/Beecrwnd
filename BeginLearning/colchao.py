colchao = input().split(' ')
colchao = [int(val) for val in colchao]

porta = input().split(' ')
porta = [int(val) for val in porta]

colchao = sorted(colchao)
porta = sorted(porta)

if porta[0] < colchao[0] or porta[1] < colchao[1]:
    print('N')
else:
    print('S')