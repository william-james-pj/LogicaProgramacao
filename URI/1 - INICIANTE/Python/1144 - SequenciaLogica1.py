numero = int(input())
i = 1
while i <= numero:
    print('{} {} {}'.format(i, i*i,i*i*i))
    print('{} {} {}'.format(i,i*i+1, i*i*i+1))
    i+=1