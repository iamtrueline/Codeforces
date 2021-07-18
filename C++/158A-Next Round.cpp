#include<iostream>

int main(){
    int n, k, rlt = 0;
    std::cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        std::cin>>arr[i];
    }

    for(int j = 0; j < n; j++){
        if(arr[j] >= arr[k-1] && arr[j] > 0){
            rlt ++;
        }
    }
    std::cout<<rlt;
}
