z = x = media = 0
while z == 0:
    n1 = int(input())
    if(n1 > 0):
        media += n1
        x += 1
    else:
        z = 1
print('{:.2f}'.format(media/x))