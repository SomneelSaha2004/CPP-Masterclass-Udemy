/*
implicit conversions are done by the compiler itself
*/
#include <iostream>
int main(){
    //implicit cast
    double a{2.3},b{4.5};
    int sum=static_cast<int>(a+b);
    char c{sum};
    std::cout<<sum<<"\n"<<a+b;
    return 0;
}