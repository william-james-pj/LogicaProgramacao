vetor = []
num = int(input())
x = 0
for y in range(0, 1000):
    if(x == num):
        x = 0
    vetor.append(x)
    x += 1
for y in range(0, len(vetor)):
    print('N[{}] = {}'.format(y, vetor[y]))