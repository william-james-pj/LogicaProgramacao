op = input()
matriz = []
soma = 0.0
posicaoInicial = 6
posicaoFim = 6
total = 0
for x in range(0, 12):
    linha = []
    for y in range(0, 12):
        linha.append(float(input()))
    matriz.append(linha)
for linhaCont in range(7, 12):
    posicaoInicial -= 1
    posicaoFim += 1
    for colunaCont in range(posicaoInicial, posicaoFim):
        soma += matriz[linhaCont][colunaCont]
        total += 1
if op == 'S':
    print('{:.1f}'.format(soma))
else:
    print('{:.1f}'.format(soma/total))