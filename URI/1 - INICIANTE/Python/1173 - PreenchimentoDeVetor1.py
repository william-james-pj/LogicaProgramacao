num = int(input())
vetor = []
vetor.append(num)
for y in range(1, 10):
    temp = vetor[y-1]*2
    vetor.append(temp)
for y in range(0, 10):
    print('N[{}] = {}'.format(y, vetor[y]))