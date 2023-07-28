dados = input().split(' ')
dados = [int(val) for val in dados]

pontosC = dados[0]*3 + dados[1]
pontosF = dados[3]*3 + dados[4]

if pontosC > pontosF:
    print('C')
elif pontosF > pontosC:
    print('F')
else:
    if dados[2] > dados[5]:
        print('C')
    elif dados[5] > dados[2]:
        print('F')
    else:
        print('=')