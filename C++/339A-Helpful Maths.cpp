#include <iostream>
#include <string>

int main(){
    std::string show;
    int arr[3] = { 0, }, len;
    std::cin>>show;
    len = show.length();

    if (len == 1) {
        std::cout<<show;
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (show[i] == '1')
            arr[0]++;
        else if (show[i] == '2')
            arr[1]++;
        else if (show[i] == '3')
            arr[2]++;
    }

    int cnt = 0;
    for (int i = 0; i < arr[0]; i++) {
        show[cnt] = '1';
        cnt += 2;
    }
    for (int i = 0; i < arr[1]; i++) {
        show[cnt] = '2';
        cnt += 2;
    }
    for (int i = 0; i < arr[2]; i++) {
        show[cnt] = '3';
        cnt += 2;
    }

    std::cout<<show;
    return 0;
}
