n = int(input())

wa = [n]
sans = [n]

for i in range(0, n):
    wa[i], sans[i] = map(int, input().split())

sum = 100 * n

for i in range(1, n+1):
    if wa[i] < wa[i-1]:
        wa[i-1] -= 10
        if wa[i] + wa[i-1] < 0:
            
