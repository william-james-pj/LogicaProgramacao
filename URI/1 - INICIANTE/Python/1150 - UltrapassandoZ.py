x = int(input())
y = 0
cont = 1
while y == 0:
    z = int(input())
    if(z > x):
        y = 1
y = 0
w = x
while y == 0:
    if(x > z):
        y = 1
    else:
        x += w
        w += 1
        cont +=1
print(cont)