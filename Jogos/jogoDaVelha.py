
def printTab():
    print(' {} | {} | {} '.format(posicaoTab[0],posicaoTab[1],posicaoTab[2]))
    print(' {} | {} | {} '.format(posicaoTab[3],posicaoTab[4],posicaoTab[5]))
    print(' {} | {} | {} '.format(posicaoTab[6],posicaoTab[7],posicaoTab[8]))

def escolhaPosição():
    testeEscolha = 1
    while testeEscolha == 1:
        posicaoEscolida = int(input('Jogado {}, escolha a posição: '.format(jogador)))
        if posicaoEscolida >= 1 and posicaoEscolida <= 9 and posicaoTab[posicaoEscolida-1] == ' ':
            posicaoTab[posicaoEscolida-1] = jogador
            testeEscolha = 0
        else:
            print('Posição escolhida invalida, por favor escolha outra posição')

def testeJogada():
    if (posicaoTab[0] == jogador and posicaoTab[1] == jogador and posicaoTab[2] == jogador) or \
            (posicaoTab[3] == jogador and posicaoTab[4] == jogador and posicaoTab[5] == jogador) or \
            (posicaoTab[6] == jogador and posicaoTab[7] == jogador and posicaoTab[8] == jogador) or \
            (posicaoTab[0] == jogador and posicaoTab[3] == jogador and posicaoTab[6] == jogador) or \
            (posicaoTab[1] == jogador and posicaoTab[4] == jogador and posicaoTab[7] == jogador) or \
            (posicaoTab[2] == jogador and posicaoTab[5] == jogador and posicaoTab[8] == jogador) or \
            (posicaoTab[0] == jogador and posicaoTab[4] == jogador and posicaoTab[8] == jogador) or \
            (posicaoTab[6] == jogador and posicaoTab[4] == jogador and posicaoTab[2] == jogador):
        return True
    else:
        return False

peg = 'y'
jogador = 'X'
posicaoTab = [' ',' ',' ',' ',' ',' ',' ',' ',' ']
for x in range (0, 9):
    printTab()
    escolhaPosição()
    if (testeJogada()):
        printTab()
        print("Jogado {}, venceu!!!".format(jogador))
        break
    else:
        if jogador == 'X':
            jogador = 'O'
        else:
            jogador = 'X'
else:
    printTab()
    print('Deu velha!!!')
    print('Jogo encerrado')