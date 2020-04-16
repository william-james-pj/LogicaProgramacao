x = int(input())
y = int(input())
impar = 0
if x % 2 == 0:
    for z in range(x, y, -1):
        if z % 2 != 0:
            impar += z
else:
    x -= 1
    for z in range(x, y, -1):
        if z % 2 != 0:
            impar += z

print(impar)