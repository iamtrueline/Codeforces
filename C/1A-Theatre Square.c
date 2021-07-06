#include <stdio.h>
 
int main(){
    long long int n, m, a, x = 0, y = 0;
    scanf("%lld %lld %lld", &n, &m, &a);
    x = n / a;
    y = m / a;
    
    if(n % a != 0){
        x++;
    }
    if(m % a != 0){
        y++;
    }
    
    printf("%lld", x * y);
}
