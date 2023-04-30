#include <iostream>
int main(){
    std::cout<<"Enter integral value : ";int i;
    std::cin>>i;
    if(i%2==0){
        std::cout<<i<<" is even\n";
    }else{
        std::cout<<i<<" is odd\n";
    }
    return 0;
}