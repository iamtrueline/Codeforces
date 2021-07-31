#include <stdio.h>
#include <string.h>

int main() {
	char a[101];
	char b[101];
	int i = 0, len = 0;

	scanf("%s %s", a, b);
	len = strlen(a);

	for(i = 0; i < len; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] - 'A' + 'a';
		}
		if (b[i] >= 'A' && b[i] <= 'Z') {
			b[i] = b[i] - 'A' + 'a';
		}
	}

	for (i = 0; i < len; i++) {
		if (a[i] != b[i]) {
			if (a[i] < b[i]) {
				printf("-1");
				return 0;
			}
			else if (a[i] > b[i]) {
				printf("1");
				return 0;
			}
		}
	}
	printf("0");
	return 0;
}
