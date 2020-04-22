z = int(input())
x = 1
while x <= z :
    partida = input().split(' ')
    j1 = str(partida[0])
    j2 = str(partida[1])
    if(partida[0] == partida[1]):
        print('Caso #{}: De novo!'.format(x))
    else:
        if j1 == 'tesoura' and j2 == 'papel':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'papel' and j2 == 'pedra':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'pedra' and j2 == 'lagarto':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'lagarto' and j2 == 'Spock':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'Spock' and j2 == 'tesoura':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'tesoura' and j2 == 'lagarto':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'lagarto' and j2 == 'papel':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'papel' and j2 == 'Spock':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'Spock' and j2 == 'pedra':
            print('Caso #{}: Bazinga!'.format(x))
        elif j1 == 'pedra' and j2 == 'tesoura':
            print('Caso #{}: Bazinga!'.format(x))
        else:
            print('Caso #{}: Raj trapaceou!'.format(x))
    del partida[0]
    del partida[0]
    x += 1