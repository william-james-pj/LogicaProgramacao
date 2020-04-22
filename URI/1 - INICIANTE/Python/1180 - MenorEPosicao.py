x = int(input())
vetor = input().split()
menor = 1000
for x in range(0, len(vetor)):
    if int(vetor[x]) < menor:
        menor = int(vetor[x])
        pos = x
print('Menor valor: {}'.format(menor))
print('Posicao: {}'.format(pos))