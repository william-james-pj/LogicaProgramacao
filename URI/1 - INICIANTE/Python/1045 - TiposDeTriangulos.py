
a,b,c = input().split()
a = float(a)
b = float(b)
c = float(c)
if(a < b):
    aux = a
    a = b
    b = aux
if(b < c):
    aux = b
    b = c
    c = aux
if(a < b):
    aux = a
    a = b
    b = aux
if (a >= b+c):
    print('NAO FORMA TRIANGULO')
elif (pow(a,2) == (pow(b,2) + pow(c,2))):
    print('TRIANGULO RETANGULO')
elif (pow(a,2) > (pow(b,2) + pow(c,2))):
    print('TRIANGULO OBTUSANGULO')
elif (pow(a,2) < (pow(b,2) + pow(c,2))):
    print('TRIANGULO ACUTANGULO')

if ((a == b) and (a == c)):
    print('TRIANGULO EQUILATERO')
elif ((a == b) or (b == c) or (a == c)):
    print('TRIANGULO ISOSCELES')