z = int(input())
while z > 0:
    vetor = []
    vetor = input().split(' ')
    a, b = map(int, input().split())
    if((a+b) % 2 == 0):
        if vetor[1] == 'PAR':
            print(vetor[0])
        else:
            print(vetor[2])
    else:
        if vetor[1] == 'IMPAR':
            print(vetor[0])
        else:
            print(vetor[2])
    z  -= 1