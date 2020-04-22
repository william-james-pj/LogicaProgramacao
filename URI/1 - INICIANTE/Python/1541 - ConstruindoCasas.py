z = 0
while z == 0:
    result = input().split(' ')
    if result[0] == '0':
        z = 0
        break
    else:
        a = int(result[0])
        b = int(result[1])
        c = int(result[2])
        terreno =  int(pow(((a*b)*100)/c, 0.5))
        print('{}'.format(terreno))