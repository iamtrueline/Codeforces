#include <stdio.h>
 
int main() {
    
    int day, limitTime, i, max = 0;
    
    scanf("%d %d", &day, &limitTime);
    
    int flag = day - 1;
    
    int minmax[day][2];
    
    for(i = 0; i < day; i++){
        scanf("%d %d", &minmax[i][0], &minmax[i][1]);
        max += minmax[i][1];
    }
    
    if(max == limitTime){
        printf("YES\n");
        for(i = 0; i < day; i++){
            printf("%d ", minmax[i][1]);
        }
    }
    else if(max > limitTime){
        while(max != limitTime){
            if(minmax[flag][1] > minmax[flag][0]){
                minmax[flag][1] -= 1;
                max--;
            }
            else{
                if(flag == 0){
                    printf("NO");
                    return 0;
                }
                flag--;
            }
        }
        printf("YES\n");
        for(i = 0; i < day; i++){
            printf("%d ", minmax[i][1]);
        }
    }
    else{
        printf("NO");
    }
    
    return 0;
}
