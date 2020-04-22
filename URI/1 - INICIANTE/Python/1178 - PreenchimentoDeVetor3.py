vetor = []

num = float(input())
vetor.append(num)
metade = num/2
for y in range(1, 100):
    vetor.append(metade)
    metade /= 2
for y in range(0,100):
    print('N[{}] = {:.4f}'.format(y, vetor[y]))