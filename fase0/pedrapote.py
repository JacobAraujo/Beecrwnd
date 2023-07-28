import math

num = int(input().strip())

palpites = input().strip().split(' ')
palpites = [int(val) for val in palpites]

erros = input().strip().split(' ')
erros = [int(val) for val in erros]

somaPalpites = sum(palpites)

somaQuadradosX = 0
somaQuadradosY = 0

for i in palpites:
    somaQuadradosX += i**2

for i in erros:
    somaQuadradosY += i**2
    
c = somaQuadradosX - somaQuadradosY
b = -2 * somaPalpites
a = num

delta = b**2-4*a*c

print(delta)

resposta1 = (-b + math.sqrt(delta))/(2*a)
resposta2 = (-b - math.sqrt(delta))/(2*a)

if resposta1 == round(resposta1) and resposta1 == resposta2:
    print(round(resposta1, 0))

if resposta1 == round(resposta1):
    print(round(resposta1, 0))
if resposta2 == round(resposta2):
    print(round(resposta2, 0))
    


