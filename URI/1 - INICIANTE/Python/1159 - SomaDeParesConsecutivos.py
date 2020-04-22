while True:
    x = int(input())
    if(x == 0):
        break
    else:
        soma = 0
        cont = 5
        zz = x
        while cont > 0:
            if zz % 2 == 0:
                soma+= zz
                cont -=1
            zz += 1
        print(soma)