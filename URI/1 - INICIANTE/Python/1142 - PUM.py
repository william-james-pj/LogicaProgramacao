num = int(input())
for y in range(1, (num*4)+1):
    if y % 4 == 0:
        print('PUM')
    else:
        print('{}'.format(y), end=' ')