j = 1
i = 0
a = 0.2
b = 1
while i <= 2:
    for x in range(0,3):
        if  j == 3 or j == 1 or j == 2 or j == 4 or j == 5:
            print('I={:.0f} J={}'.format(i, j))
        else:
            print('I={:.1f} J={}'.format(i, j))
        j += 1
    i += 0.2
    j = b + a
    a += 0.2
    if a > 0.8:
        a = 0
        b += 1
