#include <iostream>
int main(){
   const  bool c{false};
    if constexpr(c){// if condition is evaluated at compile time and the redundant statements are removed
        std::cout<<"Hi";
    }else{
        std::cout<<"Hilo";
    }
    //we can initialise a variable in the if block 
    if(bool d=true;c){
        std::cout<<"Hello";
    }
    else{
        std::cout<<std::boolalpha<<d;
    }
    //std::cout<<d; not in scope
    // we can do this with switch also
    double dd=3.23;
    dd++;
    std::cout<<dd;
    return 0;
}   