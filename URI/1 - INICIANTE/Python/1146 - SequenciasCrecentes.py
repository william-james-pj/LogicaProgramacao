z = 0
while z == 0:
    x = int(input())
    if x != 0:
        for y in range(1,x+1):
            if(y <= x-1):
                print(y ,end=" ")
            else:
                print(y)
    else:
        z = 1
        break