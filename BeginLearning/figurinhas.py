numAlbum = int(input())
numCompradas = int(input())

compradas = []
for i in range(numCompradas):
    compradas.append(input())

print(numAlbum - len(set(compradas)))
    

