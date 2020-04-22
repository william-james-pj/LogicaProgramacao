z = int(input())
while z > 0:
    x, y = map(int, input().split())
    if y == 0:
        print('divisao impossivel')
    else:
        print('{:.1f}'.format(x/y))
    z -= 1