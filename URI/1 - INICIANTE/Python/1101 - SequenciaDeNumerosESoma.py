l = 0
while l == 0:
    m, n = input().split('')
    m = int(m)
    n = int(n)
    soma = 0
    if m > 0 and n > 0:
        for y in range(min(m,n), max(m,n)+1):
            print(y, end=" ")
            soma += y
        print("Sum={}".format(soma))
    else:
        l = 1
        break