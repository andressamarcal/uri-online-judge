T = int(input())
for i in range(T):
    print(bin(int(input()))[2:].count('1'))