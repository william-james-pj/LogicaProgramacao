z = 0
w = 0
nota = nota2 = 0
while z == 0:
    w = 0
    while w == 0:
        nota = float(input())
        if nota >= 0 and nota <= 10:
            w = 1
        else:
            print('nota invalida')
    w = 0
    while w == 0:
        nota2 = float(input())
        if nota2 >= 0 and nota2 <= 10:
            w = 1
        else:
            print('nota invalida')
    print('media = {:.2f}'.format((nota+nota2)/2))
    w = 0
    while w == 0:
        print('novo calculo (1-sim 2-nao)')
        op = int(input())
        if op == 1 or op == 2:
            if op == 2:
                w = 1
                z = 1
                break
            w = 1
