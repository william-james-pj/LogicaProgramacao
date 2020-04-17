soma = 0
x = int(input())
y = int(input())
for z in range(min(x,y), max(x,y)):
    if z % 13 != 0:
        soma += z
print(soma)