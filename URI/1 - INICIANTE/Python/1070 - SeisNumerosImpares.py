x = int(input())
y = x
if x % 2 == 0:
    a = 1
else:
    a = 0
while a <= 6:
    if y % 2 != 0:
        print(y)
        a += 1
    y+=1