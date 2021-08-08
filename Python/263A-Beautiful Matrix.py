matrix = []
x = 0
y = 0
dx = 0
dy = 0

for i in range(5):
    matrix.append(input())
for i in range(5):
    for j in range(5):
        if matrix[i][j*2] != '0':
            x = i;
            y = j;
            
if x >= 2:
    dx = x - 2
else:
    dx = 2 - x
if y >= 2:
    dy = y - 2
else:
    dy = 2 - y
print(dx+dy)
