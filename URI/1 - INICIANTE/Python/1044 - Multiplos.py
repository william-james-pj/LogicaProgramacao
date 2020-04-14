a, b = input().split()
a = int(a)
b = int(b)
if a < b:
    c = b % a
    if(c == 0):
        print('Sao Multiplos')
    else:
        print('Nao sao Multiplos')
else:
    c = a % b
    if (c == 0):
        print('Sao Multiplos')
    else:
        print('Nao sao Multiplos')