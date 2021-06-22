#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int printString(int l, int n, char** names, int* number, char* buffer){
    int i;
    
    if (l > 0){
        char* newstrptr = (char*)malloc(sizeof(char) * (l + 1));
        strcpy(newstrptr, buffer);
        for(i = 0; i <= n; i++){
            if(!strcmp(names[i], newstrptr)){
                number[i]++;
                printf("%s%d\n", names[i], number[i]);
                return n;
            }
        }
        strcpy(newstrptr, buffer);
        names[n] =  newstrptr;
        printf("OK\n");
        n++;
    }
    return n;
}
 
 
int main(){
    int maxLength = 10000, i, times;
    char* names[maxLength];
    
    for(i = 0; i < 10000; i++){
        names[i] = (char*)malloc(sizeof(char) * 33);
    }
    
    int number[10000] = {0, };
    char buffer[33];
    int n = 0;
    int l = 0;
    scanf("%d", &times);
    
    for(i = 0; i < times; i++){
        scanf("%s", buffer);
        l = strlen(buffer);
        n = printString(l, n, names, number, buffer);
    }
    return 0;
}
