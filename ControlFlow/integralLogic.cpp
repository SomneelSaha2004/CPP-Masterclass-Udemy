/*
anything other than 0 gets converted to true
0 --> false
*/
#include <iostream>
int main(){
    std::cout<<std::boolalpha;
    std::cout<<(bool)4<<std::endl;
    std::cout<<(bool)0x233<<std::endl;
    std::cout<<(bool)-0.01<<std::endl;
    std::cout<<(bool)-0<<std::endl;
    //works in if condition
    if(4){
        std::cout<<"dos vidanya"<<std::endl; 
    }
    return 0;
}