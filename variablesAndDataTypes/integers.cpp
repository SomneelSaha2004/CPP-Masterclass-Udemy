#include <iostream>
int main(){
    int a;//a garbage value can be assigned
    int b{};//zero will be assigned
    int c{a+b};
    std::cout<<a;
    std::cout<<c;
    //int {2.9};//double value exceeds the range of int 
    //int e{b+e4};//error
    //functional variable initialisation
    int n1(1);
    int n2(1.1);//fractional part will get dropped resulting in 1
    std::cout<<n2;
    //we can obtain size  any type using sizeof
    std::cout<<sizeof(n2);
    int narrowing_conv=3.9;
    std::cout<<narrowing_conv;
    return 0;

}