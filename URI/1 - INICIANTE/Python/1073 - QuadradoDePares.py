x = int(input())

for y in range(1, x+1, 1):
    if(y % 2 == 0):
        print('{}^2 = {}'.format(y,y*y))