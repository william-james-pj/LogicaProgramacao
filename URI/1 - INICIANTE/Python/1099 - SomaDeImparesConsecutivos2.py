x = int(input())
y = 0
while y < x:
    n1,n2 = input().split()
    n1 = int(n1)
    n2 = int(n2)
    soma = 0
    for z in range(min(n1,n2)+1, max(n1,n2)):
        if z % 2 != 0:
            soma += z
    print('{}'.format(soma))
    y += 1