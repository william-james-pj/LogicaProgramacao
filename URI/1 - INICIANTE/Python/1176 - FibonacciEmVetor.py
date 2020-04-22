vetor = []
n1 = 0
n2 = 1
vetor.append(0)
for x in range(0, 60):
    vetor.append(n2)
    n3 = n2
    n2 = n1 + n2
    n1 = n3
num = int(input())
while num > 0:
    x = int(input())
    print('Fib({}) = {}'.format(x, vetor[x]))
    num -= 1