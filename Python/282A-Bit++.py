n = int(input())

now = 0
for times in range(n):
    a = input()
    if a[0] == '+' or a[-1] == '+':
        now+=1
    else:
        now-=1
print(now)
