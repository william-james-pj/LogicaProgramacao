
nota = int(input())

n100 = nota//100
n50 = (nota%100)//50
n20 = ((nota%100)%50)//20
n10 = (((nota%100)%50)%20)//10
n5 = ((((nota%100)%50)%20)%10)//5
n2 = (((((nota%100)%50)%20)%10)%5)//2
n1 = ((((((nota%100)%50)%20)%10)%5)%2)//1

print('{}'.format(nota))
print('{} nota(s) de R$ 100,00'.format(n100))
print('{} nota(s) de R$ 50,00'.format(n50))
print('{} nota(s) de R$ 20,00'.format(n20))
print('{} nota(s) de R$ 10,00'.format(n10))
print('{} nota(s) de R$ 5,00'.format(n5))
print('{} nota(s) de R$ 2,00'.format(n2))
print('{} nota(s) de R$ 1,00'.format(n1))