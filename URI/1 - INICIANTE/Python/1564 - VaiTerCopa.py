while True:
    try:
        num = input()
        if(int(num) == 0):
            print('vai ter copa!')
        else:
            print('vai ter duas!')
    except EOFError:
        break