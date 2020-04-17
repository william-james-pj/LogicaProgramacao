j = 7
a = j
i = 1
while i <= 9:
    print('I={} J={}'.format(i,j))
    j -= 1
    if(j < a-2):
        i += 2
        j = a + 2
        a = j