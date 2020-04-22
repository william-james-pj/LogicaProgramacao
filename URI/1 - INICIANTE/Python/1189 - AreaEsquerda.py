op = input()
matriz = []
soma = 0.0
posicaoFim = 0
teste = 1
total = 0
for x in range(0, 12):
    linha = []
    for y in range(0, 12):
        linha.append(float(input()))
    matriz.append(linha)
for linhaCont in range(1, 11):
    if teste == 1:
        posicaoFim += 1
    else:
        posicaoFim -= 1
    if posicaoFim == 6:
        teste = 0
        posicaoFim = 5
    for colunaCont in range(0, posicaoFim):
        soma += matriz[linhaCont][colunaCont]
        total += 1
if op == 'S':
    print('{:.1f}'.format(soma))
else:
    print('{:.1f}'.format(soma/total))