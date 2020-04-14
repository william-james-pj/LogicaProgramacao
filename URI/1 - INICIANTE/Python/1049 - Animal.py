linha1 = input()
linha2 = input()
linha3 = input()

if(linha1 == 'vertebrado'):
    if(linha2 == 'ave'):
        if(linha3 == 'carnivoro'):
            print('aguia')
        else:
            print('pomba')
    else:
        if(linha3 == 'onivoro'):
            print('homem')
        else:
            print('vaca')
else:
    if (linha2 == 'inseto'):
        if (linha3 == 'hematofago'):
            print('pulga')
        else:
            print('lagarta')
    else:
        if (linha3 == 'hematofago'):
            print('sanguessuga')
        else:
            print('minhoca')