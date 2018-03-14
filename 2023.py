# -*- coding: utf-8 -*-

nome = []
while True:
    try:
        nomes = input()
    except EOFError:
        break
    nome.append(nomes)
    minusculos = [i.lower() for i in nome]
    ultimo = minusculos.index(max(minusculos))
print(nome[ultimo])