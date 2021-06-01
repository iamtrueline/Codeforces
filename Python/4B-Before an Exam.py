day, limitTime = map(int, input().split())
maxnum = 0
flag = day - 1;

minmax = [[0 for col in range(2)] for row in range(day)]

for i in range(0, day):
  minmax[i][0], minmax[i][1] = map(int, input().split())
  maxnum += minmax[i][1]

if maxnum == limitTime:
  print("YES")
  for i in range(0, day):
    print((int)(minmax[i][1]), end=" ", flush = True)
elif maxnum > limitTime:
  while maxnum != limitTime:
      if minmax[flag][1] > minmax[flag][0]:
          minmax[flag][1] -= 1
          maxnum -=1
      else:   
          if flag == 0:
              print("NO")
              quit()
          flag -=1  

  print("YES")
  for i in range(0, day):
    print((int)(minmax[i][1]), end=" ", flush = True)
else:
  print("NO")
quit()
