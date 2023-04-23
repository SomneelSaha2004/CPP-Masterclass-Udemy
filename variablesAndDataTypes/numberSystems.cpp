/*
In C++ there are mechanisms to directly represent various number systems
*/
#include <iostream>
int main(){
    int d=15;//decimal
    int o=017;//octal - the zero in fron inidcates it is octal
    int h=0x00034fa;// ox at the start indicates it is hexadecimal
    int b=0b0010110;//0b at the start indicates it is binary

    std::cout<<d<<"\n"<<o<<"\n"<<h<<"\n"<<b<<std::endl;
    return 0;
}