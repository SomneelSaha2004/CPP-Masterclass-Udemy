#include <iostream>
int main(){
    for(auto multi{3};auto val:{1,2,3,4,5,6,7,8,9,10}){
            std::cout<<multi*val<<std::endl;
    }
    std::abort();
    std::cout<<"h";
    return 0;
    
}