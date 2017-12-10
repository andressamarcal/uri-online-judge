d1 = input()
d2 = input()
h1 = input()
h2 = input()
m1 = input()
m2 = input()

s1 = input()
s2 = input()

s1 += m1*60 + h1*60*60 + d1*24*60*60
s2 += m2*60 + h2*60*60 + d2*24*60*60
segundos = s2 - s1

dia = segundos/(24*60*60)
segundos = dia*24*60*60

hora = segundos/(60*60)
segundos = hora*60*60

minuto = segundos/60
segundos -= minuto*60

    
print ("%d dia(s)") % (dia)
print ("%d hora(s)") % (hora)
print ("%d minuto(s)") % (minuto)
print ("%d segundo(s)") % (segundos)
