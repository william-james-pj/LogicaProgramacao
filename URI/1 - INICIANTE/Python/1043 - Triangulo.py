a,b,c = input().split()
lista = [float(a), float(b), float(c)]
lista.sort()
if(lista[2] < (lista[0]+lista[1])):
    print('Perimetro = {:.1f}'.format(sum(lista)))
else:
    print('Area = {:.1f}'.format(((lista[2]+lista[1])*lista[0])/2))