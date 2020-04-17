n = int(input())
n1 = 0
n2 = 1
print(0,end=" ")
for z in range(0, n-1):
    if z != n-2:
        print(n2, end=" ")
    else:
        print(n2)
    n3 = n2
    n2 = n1 + n2
    n1 = n3