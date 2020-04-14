lista = input().split(' ')
lista2 = input().split(' ')
valor = int(lista[1]) * float(lista[2]) + int(lista2[1]) * float(lista2[2])

print('VALOR A PAGAR: R$ {:.2f}'.format(valor))