# -*- coding: utf-8 -*-
l=[]
soma_in=0
soma_out=0
a=int(input())
for n in range (1,(a+1)):
    l.append(input())
for n in l:
    if (10<=int(n)<=20):
        soma_in+=1
    elif (int(n)>20) or(int(n)<10):
        soma_out+=1
print(soma_in,"in")
print(soma_out,"out")