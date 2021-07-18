#include <stdio.h>

int main () {
    int n, k, i, set, rlt = 0, arr[50] = {0, };
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0){
            rlt ++;
        }
    }
    printf("%d", rlt);
    return 0;
}
