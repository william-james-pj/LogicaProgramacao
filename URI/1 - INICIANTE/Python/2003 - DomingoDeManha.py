while True:
    try:
        hora = input().split(':')
        hora[1] = int(hora[1])
        hora[0] = int(hora[0])
        hora[1] += 60
        if hora[1] > 60:
            hora[1] -= 60
            hora[0] += 1
        if hora[0] > 8:
            hora[1] += (hora[0] - 8) * 60
            hora[0] -= hora[0] - 8
        if hora[0] == 8:
            print('Atraso maximo: {}'.format(hora[1]))
        else:
            print('Atraso maximo: 0')
    except EOFError:
        break