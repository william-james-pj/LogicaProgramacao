x = int(input())
palavra = []
for y in range(0,x,1):
    num = int(input())
    if num != 0:
        if num % 2 == 0:
            palavra.append('EVEN')
        elif num % 2 != 0:
            palavra.append('ODD')
        if num > 0:
            palavra[y] += ' POSITIVE'
        else:
            palavra[y] += ' NEGATIVE'
    else:
        palavra.append('NULL')

for y in range(0, x, 1):
    print(palavra[y])