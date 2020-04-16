salario = float(input())
if salario >=-1 and salario <= 2000.00:
    print('Isento')
elif salario > 1999.0 and salario <= 3000.00:
    print("R$ {:.1f}".format((salario-2000)*0.08))
elif salario > 2999.00 and salario <= 4500.00:
    print("R$ {:.1f}".format((1000*0.08)+(salario-3000)*0.18))
elif salario > 4499.00:
    print("R$ {:.1f}".format((1000 * 0.08) + (1500 *0.18) + (salario - 4500) * 0.28))