#include <iostream>
#include <iomanip>
#include <string>
/*
std::boolalpha - forces bool output to come as true false
std::noboolalpha - convert back to 0,1
std::showpos - 34 becomes +34 in output (std::noshowpos reveres)
*/
void repeatChar(char ch,int n){
    std::cout<<std::setfill(ch);
    std::cout<<""<<std::setw(n)<<"";
    std::cout<<std::boolalpha<<static_cast<bool>(1);
}
/*
to show number in other number systems use
std::oct for octal
std::hex for hex
std::dec for decimal
note : theese only work for int types
to use for float use floathex,floatoct..
*/
int main(){
    // char ch;int n;
    // std::cin>>ch;
    // std::cin>>n;
    // repeatChar(ch,n);
    int h=-2323;
    int o=2323;
    int d=-1212;
    std::cout<<std::oct<<h<<std::endl;
    std::cout<<std::showbase<<std::uppercase;
    std::cout<<std::oct<<h<<"    "<<o<<"     "<<d<<"\n";
    std::cout<<std::hex<<h<<"    "<<o<<"     "<<d<<"\n";
    std::cout<<std::dec<<h<<"    "<<o<<"     "<<d<<"\n";
    return 0;
}