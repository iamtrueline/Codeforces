#include <stdio.h>
 
int main () {
	int n = 0, m = 0, i, j, sum = 0, tmp;
	scanf("%d", &n);
 
	for(i = 0; i < n; i++){
		scanf("%d", &m);
		for(j= 0; j< m; j++){
			scanf("%d", &tmp);
			if(tmp == 1 || tmp ==3){
				sum+=1;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
