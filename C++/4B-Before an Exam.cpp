#include <iostream>

int main() {
    int day = 1, limitTime = 0, max = 0;
    
    std::cin >> day >> limitTime;

    int flag = day - 1;
    int** minmax = (int**)malloc(sizeof(int*) * day);
    for(int i = 0; i < day; i++){
        minmax[i] = (int*)malloc(sizeof(int) * 2);
    }

    for(int i = 0; i < day; i++){
        std::cin >> minmax[i][0] >> minmax[i][1];
        max += minmax[i][1];
    }
    
    if(max == limitTime){
        std::cout << "YES" << std::endl;
        for(int i = 0; i < day; i++){
            std::cout << minmax[i][1] << " ";
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
                   std::cout << "NO" << std::endl;
                    return 0;
                }
                flag--;
            }
        }
        std::cout << "YES" << std::endl;
        for(int i = 0; i < day; i++){
            std::cout << minmax[i][1] << " ";
        }
    }
    else{
        std::cout << "NO" << std::endl;
    }

    return 0;
}
