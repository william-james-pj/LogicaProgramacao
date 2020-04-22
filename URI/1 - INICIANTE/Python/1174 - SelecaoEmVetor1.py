vetor = []

for x in range(0, 100):
    vetor.append(float(input()))
for x in range(0, 100):
    if(vetor[x] <= 10):
        print('A[{}] = {:.1f}'.format(x, vetor[x]))