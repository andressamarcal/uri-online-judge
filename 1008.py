# -*- coding: utf-8 -*-

numero_funcionario = int(input())
horas_trabalhadas = int(input())
valor_hora = float(input())

salario = float(horas_trabalhadas * valor_hora) 

print("NUMBER = %d" %numero_funcionario)
print("SALARY = U$ %0.2f" %salario)
