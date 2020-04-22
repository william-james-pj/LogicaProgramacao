a, b, c, d = map(int, input().split())
if abs(b - c) < a and a < b + c and abs(a - c) < b and b < a + c and abs(b - a) < c and c < b + a:
    print('S')
elif abs(b - c) < d and d < b + c and abs(d - c) < b and b < d + c and abs(b - d) < c and c < b + d:
    print('S')
elif abs(d - c) < a and a < d + c and abs(a - c) < d and d < a + c and abs(d - a) < c and c < d + a:
    print('S')
elif abs(b - d) < a and a < b + d and abs(a - d) < b and b < a + d and abs(b - a) < d and d < b + a:
    print('S')
else:
    print('N')