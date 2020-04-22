num = int(input())
fatorial = num
while num > 1:
    fatorial *= (num - 1)
    num -= 1
print(fatorial)