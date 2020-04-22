x = media = 0
while x != 2:
    nota = float(input())
    if(nota < 0 or nota > 10):
        print('nota invalida')
    else:
        x += 1
        media += nota
print('media = {:.2f}'.format(media/2))