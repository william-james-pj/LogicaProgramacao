
pares = impares = positivos = negativos = 0
x = 1
while x <= 5:
    a = int(input())
    if a > 0:
        positivos += 1
    if a < 0:
        negativos += 1
    if a % 2 == 0:
        pares += 1
    if a % 2 != 0:
        impares += 1

    x+=1

print('{} valor(es) par(es)'.format(pares))
print('{} valor(es) impar(es)'. format(impares))
print('{} valor(es) positivo(s)'.format(positivos))
print('{} valor(es) negativo(s)'.format(negativos))