#include <iostream>

int main() {
    int n, sum = 0;
    bool a, b, c;
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cin >> a >> b >> c;
        if((a && b) || (b && c) || (c && a)){
            sum++;
        }
    }
    
    std::cout << sum;
    return 0;
}
