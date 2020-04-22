z = int(input())
vetor = list(map(int, input().split()))
m2 = m3 = m4 = m5 = 0
for y in range(0, z):
    if vetor[y] % 2 == 0:
        m2 +=1
    if vetor[y] % 3 == 0:
        m3 += 1
    if vetor[y] % 4 == 0:
        m4 += 1
    if vetor[y] % 5 == 0:
        m5 += 1
print('{} Multiplo(s) de 2'.format(m2))
print('{} Multiplo(s) de 3'.format(m3))
print('{} Multiplo(s) de 4'.format(m4))
print('{} Multiplo(s) de 5'.format(m5))