#include <iostream>
/*
const - to declare variables as constants
constexpr - constants that are evaluated at compile time
*/
int main(){
    const int  a{0};
    //a=0;--> error
    int b;
    std::cin>>b;
    const int c{b};
    //constexpr int d{c};--> error as c is not known at compile time
    constexpr int e{a+0x122};
    constexpr double pi=22/7.0;
   // static_assert(pi==3);
    //static_assert(b==2);b is not conatant
    static_assert(a==0);
    std::cout<<e;
    static_assert(e==290);//the editor itself will tellif failed
    return 0;

}
    
