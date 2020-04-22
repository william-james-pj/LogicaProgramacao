vetor = []
for y in range(0, 20):
    vetor.append(int(input()))
vetor.reverse()
for y in range(0, 20):
    print('N[{}] = {}'.format(y, vetor[y]))