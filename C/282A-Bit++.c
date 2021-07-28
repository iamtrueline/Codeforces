#include <stdio.h>

int main () {
    int n, i, now = 0;
    char a[3];
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%s", a);
        if(a[0] == '+' || a[2] == '+'){
            now++;
        }
        else{
            now--;
        }
    }
    printf("%d", now);
    return 0;
}
