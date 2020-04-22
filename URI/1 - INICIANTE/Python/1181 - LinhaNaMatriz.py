
linhaEsco = int(input())
operacao = input()
matriz = []
soma = 0
for x in range(0, 12):
    linha = []
    for y in range(0, 12):
        linha.append(float(input()))
    matriz.append(linha)
for x in range(0, 12):
    soma += matriz[linhaEsco][x]
if(operacao == 'S'):
    print(soma)
else:
    print(soma/12)