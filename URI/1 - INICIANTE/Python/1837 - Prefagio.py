a, b = input().split(' ')
a = int(a)
b = int(b)
if(a > 0):
    r = a % abs(b)
    q = int(a / b)
else:
    for r in range(0, abs(b)):
        f = a - r
        if f % b == 0:
            break
    q = int(f / b)

print('{} {}'.format(q,r))