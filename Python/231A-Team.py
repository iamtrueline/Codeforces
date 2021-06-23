n = int(input())
sum = 0
for i in range(n):
    a, b, c = map(int, input().split())
    if (a and b) or (b and c) or (c and a):
        sum += 1
print(sum)
