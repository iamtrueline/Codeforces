n = int(input())
sum = 0
for i in range(n):
    m = int(input())
    li = list(map(int, input().split(" ")))
    for j in range(m):
        if li[j]==1 or li[j]==3:
            sum += 1
    print(sum)
    sum = 0
