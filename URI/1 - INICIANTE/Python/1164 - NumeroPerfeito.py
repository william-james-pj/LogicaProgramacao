z = int(input())
while z > 0:
    num = int(input())
    soma = 0
    for y in range(1, num):
        if num % y == 0:
            soma += y
    if soma == num:
        print('{} eh perfeito'.format(num))
    else:
        print('{} nao eh perfeito'.format(num))
    z -= 1