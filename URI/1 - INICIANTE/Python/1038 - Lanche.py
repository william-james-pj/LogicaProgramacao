a, b = input().split()
a = int(a)
b = int(b)

if (a == 1):
    print('Total: R$ {:.2f}'.format(4.0*b))
elif (a == 2):
    print('Total: R$ {:.2f}'.format(4.5 * b))
elif (a == 3):
    print('Total: R$ {:.2f}'.format(5.0 * b))
elif (a == 4):
    print('Total: R$ {:.2f}'.format(2.0 * b))
elif (a == 5):
    print('Total: R$ {:.2f}'.format(1.5 * b))