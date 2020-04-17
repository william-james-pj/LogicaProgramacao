x = 0
while x == 0:
    n1,n2 = input().split(' ')
    n1 = int(n1)
    n2 = int(n2)
    if n1 != n2:
        if n1 > n2:
            print("Decrescente")
        else:
            print("Crescente")
    else:
        x = 1
        break