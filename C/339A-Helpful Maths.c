#include <stdio.h>
#include <string.h>

int main(){
    char show[101];
    int arr[3] = { 0, }, i, len;
    scanf("%s" , show);
    len = strlen(show);

    if (len == 1) {
        printf("%s", show);
        return 0;
    }

    for (i = 0; i < len; i++) {
        if (show[i] == '1')
            arr[0]++;
        else if (show[i] == '2')
            arr[1]++;
        else if (show[i] == '3')
            arr[2]++;
    }

    int cnt = 0;
    for (i = 0; i < arr[0]; i++) {
        show[cnt] = '1';
        cnt += 2;
    }
    for (i = 0; i < arr[1]; i++) {
        show[cnt] = '2';
        cnt += 2;
    }
    for (i = 0; i < arr[2]; i++) {
        show[cnt] = '3';
        cnt += 2;
    }

    printf("%s", show);
    return 0;
}
