#include <stdio.h>
 
int main (){
    int n, i, a, b, c, sum = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a==1){
            if(b==1 || c==1){
                sum++;
            }
        }
        else if(b==1 && c==1){
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
