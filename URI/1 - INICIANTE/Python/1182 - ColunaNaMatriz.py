l = int(input())
operacao = input()
matriz = []
soma = 0.0
for x in range(0, 12):
    linha = []
    for y in range(0, 12):
        linha.append(float(input()))
    matriz.append(linha)
for x in range(0, 12):
    soma += matriz[x][l]
if operacao == 'S':
    print('{:.1f}'.format(soma))
else:
    print('{:.1f}'.format(soma/12))