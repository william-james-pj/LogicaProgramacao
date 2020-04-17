s = 0
z = y = 1
while y <= 39:
    s += y / z
    y += 2
    z *=2
print('{:.2f}'.format(s))