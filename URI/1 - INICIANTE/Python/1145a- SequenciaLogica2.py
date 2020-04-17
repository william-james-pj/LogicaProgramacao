x, y = input().split(' ')
x = int(x)
y = int(y)
for z in range(1,y, x):
    for w in range(0,x):
        if(z+w <= y):
            if w != x-1:
                print('{}'.format(z+w), end=" ")
            else:
                print('{}'.format(z+w))