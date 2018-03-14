# -*- coding -*- utf-8

vendedor = input()
salario_fixo = float(input())
vendas_mes = float(input())
vendas_comissao = float(vendas_mes * 15/100) + salario_fixo

print ("TOTAL = R$ %0.2f" %vendas_comissao)