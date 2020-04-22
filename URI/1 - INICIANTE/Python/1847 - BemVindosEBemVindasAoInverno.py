a, b, c = input().split(' ')
a = int(a)
b = int(b)
c = int(c)
if a > b and b <= c:
    print(':)')
elif a < b and b >= c:
    print(':(')
elif a < b and b < c and (b - a) > (c - b):
    print(':(')
elif a < b and b < c and (c - b) >= (b - a):
    print(':)')
elif a > b and b > c and (b-c) < (a-b):
    print(':)')
elif a > b and b > c and (b-c) >= (a-b):
    print(':(')
elif a == b and b < c:
    print(':)')
elif a == b and b > c:
    print(':(')
else:
        print(":(")