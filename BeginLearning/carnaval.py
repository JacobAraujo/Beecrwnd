notas = input().strip().split(' ')
notas = [float(val) for val in notas]

notas = sorted(notas)

del notas[0]
del notas[-1]

print(round(sum(notas), 1))