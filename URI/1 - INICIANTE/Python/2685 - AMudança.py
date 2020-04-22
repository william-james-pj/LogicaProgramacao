while True:
    try:
        pos = int(input())
        pos = pos%360
        if pos == 360:
            print('Bom Dia!!')
        elif pos >= 0 and pos < 90:
            print('Bom Dia!!')
        elif pos >= 90 and pos < 180:
            print('Boa Tarde!!')
        elif pos >= 180 and pos < 270:
            print('Boa Noite!!')
        elif pos >= 270 and pos < 360:
            print('De Madrugada!!')
    except EOFError:
        break