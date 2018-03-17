entrada = input().split()
numAbas = int(entrada[0])
numAcoes = int(entrada[1])

cont = 0
while cont < numAcoes:
	acao = input()
	if acao == "fechou":
		numAbas += 1
	else:
		numAbas -= 1
	cont += 1

print(numAbas)