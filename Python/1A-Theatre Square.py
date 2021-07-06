n, m, a = map(int, input().split())
x = (int)(n / a)
y = (int)(m / a)
 
if (n % a) != 0:
    x += 1;
if (m % a) != 0:
    y += 1;
print((int)(x * y))
