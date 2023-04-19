#include <iostream>
int main(){
    //boolean can have 2 values true and false
    bool t{true};
    bool f{0};
    //true-->1
    //false-->0
    //when printed
    std::cout<<t<<"\n"<<f<<std::endl;
    // there is a way to print true or false
    std::cout<<std::boolalpha;
    std::cout<<t+f;//t+f makes it 0,1 again
    std::cout<<sizeof(bool);
    return 0;
    
}