
while True:
    try:
        n = int(input())
        velocidade = list(map(int,input().split()))
        maxVelocidade = max(velocidade)
        if maxVelocidade < 10:
            print(1)
        elif maxVelocidade >= 10 and int(max(velocidade)) < 20:
            print(2)
        else:
            print(3)
    except EOFError:
        break