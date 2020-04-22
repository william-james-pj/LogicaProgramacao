z = int(input())
while z > 0:
    num = int(input())
    temp = s = 0
    for y in range(0 , num):
        if temp == 0:
            s += 1
            temp = 1
        else:
            s -= 1
            temp = 0
    print(s)
    z -= 1