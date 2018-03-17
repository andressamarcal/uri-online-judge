n,m = map(int,input().split())

while n >= 0 or m >= 0:
    n,m = map(int,input().split())
    if n > m:
        print("Decrescente")
    else:
        print("Crescente")