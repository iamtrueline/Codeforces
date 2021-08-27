#include <iostream>
using namespace std;

int main(){
    int n, m, tmp, sum=0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>m;
        for(int j = 0; j < m; j++){
            cin>>tmp;
            if(tmp==1 || tmp==3){
                sum += 1;
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
