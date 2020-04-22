
z = int(input())
while z > 0:
    num = int(input())
    div = 0
    for y in range(1, num+1):
        if(num % y == 0):
            div += 1
    if div == 2:
        print('{} eh primo'.format(num))
    else:
        print('{} nao eh primo'.format(num))
    z -= 1