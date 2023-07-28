num = int(input())

casas = []
for i in range(num):
    casas.append(int(input()))

k = int(input())

i = 0
j = len(casas)-1

while 1:
    if casas[i] + casas[j] == k:
        print(str(casas[i]) + ' ' + str(casas[j]))
        break
    elif casas[i] + casas[j] < k:
        i += 1
    elif casas[i] + casas[j] > k:
        j -= 1
