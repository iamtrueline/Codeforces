#include <stdio.h>
# include <stdlib.h>

int main (){
    int i, n, len;
    char word[100];
    scanf("%d",&n);
 
    for (i = 0; i < n; i++){
        scanf("%s",&word);
        len=strlen(word);
        if (len>10){
               printf("%c%d%c\n", word[0], len-2, word[len-1]);
            }
        else{
            printf("%s\n", word);
        }
    }
return 0;
}
