z = int(input())
for y in range(0,z):
    pa, pb, g1, g2 = input().split()
    pa = int(pa)
    pb = int(pb)
    g1 = float(g1)
    g2 = float(g2)
    t  = 0
    while pa <= pb:
        pa += int(pa*(g1/100.0))
        pb += int(pb*(g2/100.0))
        t += 1
        if(t > 100):
            t = 101
            break
    if t == 101:
        print('Mais de um seculo.')
    else:
        print('{} anos.'.format(t))

