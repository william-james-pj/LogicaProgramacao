x = int(input())

print('{} ano(s)'.format(x//365))
print('{} mes(es)'.format((x%365)//30))
print('{} dia(s)'.format(((x%365)%30)//1))