a = input()
b = input()
a = a.lower()
b = b.lower()
rlt = 0
for i in range(len(a)):
    if a[i] != b[i]:
        if a[i] < b[i]:
            rlt='-1'
            break
        elif a[i] > b[i]:
            rlt='1'
            break
print(rlt)
