op = input()
matriz = []
soma = 0.0
posicaoInicial = 12
teste = 1
total = 0
for x in range(0, 12):
    linha = []
    for y in range(0, 12):
        linha.append(float(input()))
    matriz.append(linha)
for linhaCont in range(1, 11):
    if teste == 1:
        posicaoInicial -= 1
    else:
        posicaoInicial += 1
    if posicaoInicial == 6:
        teste = 0
        posicaoInicial = 7
    for colunaCont in range(posicaoInicial, 12):
        soma += matriz[linhaCont][colunaCont]
        total += 1
if op == 'S':
    print('{:.1f}'.format(soma))
else:
    print('{:.1f}'.format(soma/total))