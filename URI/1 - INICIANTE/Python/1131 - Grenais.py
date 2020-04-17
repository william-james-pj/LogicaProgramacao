w = grenal = inter = gremio = empates = 0
while w == 0:
    grenal += 1
    g1, g2 = input().split(' ')
    g1 = int(g1)
    g2 = int(g2)
    if g1 == g2:
        empates += 1
    elif g1 > g2:
        inter += 1
    else:
        gremio += 1
    print('Novo grenal (1-sim 2-nao)')
    op = int(input())
    if op == 2:
        w = 1
print('{} grenais'.format(grenal))
print('Inter:{}'.format(inter))
print('Gremio:{}'.format(gremio))
print('Empates:{}'.format(empates))
if(inter > gremio):
    print('Inter venceu mais')
else:
    print('Gremio venceu mais')