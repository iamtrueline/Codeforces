show = input()
rlt = ''
arr  = [0, 0, 0]
lenn = len(show)

if lenn == 1:
    print(show)
    
else:
    for i in range(lenn):
        if show[i] == '1':
            arr[0] += 1
        elif show[i] == '2':
            arr[1] += 1
        elif show[i] == '3':
            arr[2] += 1
            
    for i in range(arr[0]):
        rlt += '1+'
    for i in range(arr[1]):
        rlt += '2+'
    for i in range(arr[2]):
        rlt += '3+'
    
    print(rlt[0:-1])
