vetor = []

for x in range(0, 10):
    y = int(input())
    if y > 0:
        vetor.append(y)
    else:
        vetor.append(1)
for x in range(0, 10):
    print('X[{}] = {}'.format(x,vetor[x]))