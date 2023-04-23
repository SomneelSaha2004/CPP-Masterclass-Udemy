#include <iostream>
#include <bitset>
int main(){
    long int val;
    std::cin>>val;
    val+=0x23122;
    std::cout<<std::showbase<<std::hex<<val<<"\n";
    std::cout<<std::oct<<val<<"\n";
    std::cout<<std::bitset<16>(val)<<val<<"\n";
    return 0;
}