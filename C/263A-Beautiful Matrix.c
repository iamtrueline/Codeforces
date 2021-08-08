#include <stdio.h>

int main(){
    int matrix[5][5];
    int i, j, x, y, dx, dy;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                x = i;
                y = j;
            }
        }
    }

    if (x >= 2) {
        dx = x - 2;
    }
    else {
        dx = 2 - x;
    }
    if (y >= 2) {
        dy = y - 2;
    }
    else {
        dy = 2 - y;
    }

    printf("%d", dx + dy);
    return 0;
}
