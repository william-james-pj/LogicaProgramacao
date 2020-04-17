sapos = ratos = coelho = total = 0
z = 0
x = int(input())
while z < x:
    qtd, tipo = input().split(' ')
    qtd = int(qtd)
    if tipo == 'S':
        sapos += qtd
    elif tipo == 'R':
        ratos += qtd
    else:
        coelho += qtd
    total += qtd
    z += 1
print('Total: {} cobaias'.format(total))
print('Total de coelhos: {}'.format(coelho))
print(('Total de ratos: {}'.format(ratos)))
print('Total de sapos: {}'.format(sapos))
print('Percentual de coelhos: {:.2f} %'.format((coelho*100)/total))
print('Percentual de ratos: {:.2f} %'.format((ratos*100)/total))
print('Percentual de sapos: {:.2f} %'.format((sapos*100/total)))