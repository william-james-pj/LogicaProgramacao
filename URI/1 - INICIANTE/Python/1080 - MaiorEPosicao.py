x = 1
max = 0
pos = 0
while x <= 100:
    num = int(input())
    if(num > max):
        max = num
        pos = x
    x += 1
print('{}'.format(max))
print('{}'.format(pos))