#include <iostream>
int main(){
    std::cout<<"Enter age : ";int i;
    std::cin>>i;
    if(i<21){
        std::cout<<" you are too young for the treatment\n";return 0;
    }if(i>39){
        std::cout<<" you are too old for the treatment\n";return 0;
    }
    std::cout<<" you are eligible for the treatment\n";
    return 0;
}