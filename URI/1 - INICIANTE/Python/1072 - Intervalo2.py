x = int(input())
dentro = fora = 0
for y in range(0, x, 1):
    num = int(input())
    if num >= 10 and num <= 20:
        dentro += 1
    else:
        fora += 1;

print('{} in'.format(dentro))
print('{} out'.format(fora))