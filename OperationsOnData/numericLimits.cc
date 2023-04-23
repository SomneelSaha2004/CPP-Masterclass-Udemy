#include <iostream>
#include <limits>
int main(){
    std::cout<<"Ranges"<<"\n";
    std::cout<<std::numeric_limits<double>::lowest()<<"==>"<<std::numeric_limits<double>::max();
    std::cout<<std::numeric_limits<long double>::lowest()<<"==>"<<std::numeric_limits<long double>::max();
    return 0;
}