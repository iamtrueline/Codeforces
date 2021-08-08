#include <iostream>

int main(){
    int matrix[5][5];
    int x, y, dx, dy;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin>>matrix[i][j];
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

    std::cout<<dx+dy;
    return 0;
}
