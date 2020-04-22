# Nao funciona

while True:
    try:
        qtd = int(input())
        vetor = []
        for z in range(0, qtd):
            vetor.append(int(input()))
        salto = int(input())

        soma = 0
        for y in range(0, qtd, salto):
            soma += vetor[y]
        cont = 0
        for z in range(1, soma+1):
            if soma % z == 0:
                cont += 1
        if cont == 2:
            print('You’re a coastal aircraft, Robbie, a large silver aircraft.')
        else:
            print('Bad boy! I’ll hit you.')
    except:
        break