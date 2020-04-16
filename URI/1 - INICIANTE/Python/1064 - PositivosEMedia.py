a = float(input())
b = float(input())
c = float(input())
d = float(input())
e = float(input())
f = float(input())
soma = 0
media = 0.0
if a > 0:
    soma += 1
    media += a
if b > 0:
    soma +=1
    media += b
if c > 0:
    soma += 1
    media += c
if d > 0:
    soma += 1
    media += d
if e > 0 :
    soma += 1
    media += e
if f > 0:
    soma += 1
    media += f

print('{} valores positivos'.format(soma))
print('{:.1f}'.format(media/soma))