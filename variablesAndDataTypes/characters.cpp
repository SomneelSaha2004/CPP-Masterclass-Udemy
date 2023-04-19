#include <iostream>
int main(){
    char c{'a'};
    char c1{98};//23 converted to corresponding ASCII value
    std::cout<<c1<<"\n";
    // we can convert char to integral value 
    std::cout<<static_cast<int>(c)<<std::endl;
    double d=3.14232e-8;
    std::cout<<static_cast<int>(d);
    std::cout<<sizeof(char);
    return 0;
}