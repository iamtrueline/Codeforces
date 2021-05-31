#include <iostream>
 
int main() {
    int a;
    std::cin >> a;
    if(a % 2 == 0){
        if(a == 2){
            std::cout << "NO";
        }
        else{
            std::cout << "YES";
        }
    }
    else{
        std::cout << "NO";
    }
    return 0;
}
