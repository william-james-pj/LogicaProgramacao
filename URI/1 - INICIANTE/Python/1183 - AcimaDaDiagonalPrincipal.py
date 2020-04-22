op = input()
matriz = []
soma = 0.0
cont = total = 0
for x in range(0, 12):
    linha = []
    for y in range(0, 12):
        linha.append(float(input()))
    matriz.append(linha)
for linhaCont in range(0, 11):
    cont += 1
    for colunaCont in range(cont, 12):
        soma += matriz[linhaCont][colunaCont]
        total += 1
if op == 'S':
    print('{:.1f}'.format(soma))
else:
    print('{:.1f}'.format(soma/total))