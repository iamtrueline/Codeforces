#include <iostream>
#include <map>
#include <string>

int main()
{
    std::string a;
    int n;
    std::map<std::string, int> list;
    
    std::cin>>n;
    
    for(int i=0; i<n; i++){
        std::cin>>a;
        if(list.count(a)==0){
            std::cout<<"OK"<<std::endl;
            list[a] = 1;
        }
        else{
            std::cout<<a<<list[a]<<std::endl;
            list[a] += 1;
        }
    }
    
    return 0;
}
