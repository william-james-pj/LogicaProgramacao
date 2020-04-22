alcool = gasolina = diesel = 0
while True:
    tipo = int(input())
    if tipo == 4:
        break
    elif tipo == 1:
        alcool += 1
    elif tipo == 2:
        gasolina += 1
    elif tipo == 3:
        diesel += 1
print('MUITO OBRIGADO')
print('Alcool: {}'.format(alcool))
print('Gasolina: {}'.format(gasolina))
print('Diesel: {}'.format(diesel))