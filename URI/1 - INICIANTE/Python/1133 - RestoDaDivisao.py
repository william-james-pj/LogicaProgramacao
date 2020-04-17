
x = int(input())
y = int(input())
for z in range(min(x,y)+1, max(x,y)):
    if z % 5 == 2 or z % 5 == 3:
        print(z)