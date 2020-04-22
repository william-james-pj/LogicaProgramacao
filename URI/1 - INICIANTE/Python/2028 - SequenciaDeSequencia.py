caso = 0
while True:
    try:
        num = int(input())
        cont = 1
        caso += 1
        for y in range(0, num+1):
            for z in range(0, y):
                cont += 1
        if cont == 1:
            print('Caso {}: {} numero'.format(caso, cont))
        else:
            print('Caso {}: {} numeros'.format(caso, cont))
        if num == 0:
            print('0')
        else:
            print(0,end=' ')
        for y in range(0, num+1):
            for z in range(0, y):
                if y == num and z == num - 1:
                    print(y)
                else:
                    print(y, end=' ')
        print('')
    except:
        break