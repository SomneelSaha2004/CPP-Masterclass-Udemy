#include <iostream>
// auto - let compiler deduce
int main(){
    auto v1{1};
    auto v2{15.023923923f};
    auto v3{"Hello World"};
    auto dl{12.3l};//long double
    //int modifiers
    auto v4{12u};
    v4=-45;
    std::cout<<v4;
    auto v5{134ul};
    auto v6{34ll};
    std::cout<<sizeof(v2)<<" "<<v2<<std::endl;
    std::cout<<sizeof(v3)<<" "<<v3<<std::endl;
    std::cout<<sizeof(dl)<<" "<<dl<<std::endl;
    std::cout<<sizeof(v6)<<" "<<v6<<std::endl;
    return 0;
}