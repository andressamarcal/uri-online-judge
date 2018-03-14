# -*- coding: utf-8 -*-

import math

try:
    while True:
        x = input().split(" ")
        r1, x1, y1, r2, x2, y2 = x

        R1 = int(r1)
        X1 = int(x1)
        Y1 = int(y1)
        R2 = int(r2)
        X2 = int(x2)
        Y2 = int(y2)

        if R1 >= 1 and R2 <= 1000:
            conta = math.sqrt((X2-X1)**2 + (Y2-Y1)**2)
            if R1 >= conta + R2:
                print("RICO")
            else:
                print("MORTO")
        else:
            break

except:
    EOFError