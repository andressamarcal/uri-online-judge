n = input()
d = {'0': 6, '1': 2, '2': 5, '3': 5, '4': 4, '5': 5, '6': 6, '7': 3,'8': 7,'9': 6}
while n:
    a = input()
    ans = 0
    for c in a:
        ans+=d[c]
    print(str(ans)+ " leds")
n-=1