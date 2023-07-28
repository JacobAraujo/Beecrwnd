n = int(input())
frequencia = []

for i in range(n):
    num = int(input())
    frequencia.append(num)

frequencia = list(set(frequencia))
print(len(frequencia))