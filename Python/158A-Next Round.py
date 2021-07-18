n, k = map(int, input().split(" "))
rlt = 0
arr = list(map(int, input().split(" ")))
set = arr[k-1];

for i in range(n):
    if arr[i] >= arr[k-1] and arr[i] > 0: 
        rlt += 1
print(rlt)
