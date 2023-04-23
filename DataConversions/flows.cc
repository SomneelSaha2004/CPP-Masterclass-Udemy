#include <iostream>
int main(){
    unsigned char ch{34};
    ch+=340;
    //std::cout<<ch<<" "<<(int)ch;
    /*
    once we reach the upper or lower limit the bits get reset
    when we hit max limit - overflow
    when we hit lower limit - underflow
    */
   ch=255;
   ch++;
    std::cout<<ch<<" "<<(int)ch<<"\n";
    ch=0;
    ch--;
    std::cout<<ch<<" "<<(int)ch<<"\n";
    return 0;
}