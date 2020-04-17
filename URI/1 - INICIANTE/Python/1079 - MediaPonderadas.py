numero = int(input())
y = 0
while y < numero:
    num1, num2, num3 = input().split(' ')
    num1 = float(num1)
    num2 = float(num2)
    num3 = float(num3)
    print('{:.1f}'.format((num1*2 + num2 * 3 + num3 * 5)/10))
    y += 1