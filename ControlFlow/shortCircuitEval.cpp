/*
If we have a compound logical expression
we know in AND that if one of them is false all others will be as well
same with OR of one is true others will be also
so compiler will not evaluate after a certain point
*/
#include <iostream>
bool a(){
    std::cout<<"a"<<std::endl;
    return true;
}
bool b(){
    std::cout<<"b"<<std::endl;
    return false;
}
bool c(){
    std::cout<<"c"<<std::endl;
    return true;
}
int main(){
    auto result=(a()&&b()&&c());//only ab will print
    std::cout<<"\n";
    result=(a()||b()||c());//only a will print
    return 0;
}
