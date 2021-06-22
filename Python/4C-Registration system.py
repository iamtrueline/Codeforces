arr = {}

n = int(input())
for i in range(n):
    temp = input()
    if temp in arr:
        arr[temp] += 1;
        print(temp+str(arr[temp]))
    else:
        arr[temp] = 0;
        print("OK")
