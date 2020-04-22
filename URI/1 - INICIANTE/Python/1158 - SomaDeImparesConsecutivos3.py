z = int(input())
while z > 0:
    soma = 0
    x, y = map(int, input().split())
    temp = y
    zz = x
    while temp > 0:
        if zz % 2 != 0:
            soma += zz
            temp -= 1
        zz += 1
    print(soma)
    z -= 1