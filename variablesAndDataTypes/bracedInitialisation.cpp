#include <iostream>
int main(){
    int a;//a garbage value will be assigned NOT ZERO
    int b{};//zero will be assigned
    int c{a+b};
    std::cout<<a;
    std::cout<<c;
    //int {2.9};//double value exceeds the range of int 
    //int e{b+e4};//error
    return 0;

}