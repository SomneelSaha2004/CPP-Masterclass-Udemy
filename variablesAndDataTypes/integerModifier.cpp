

#include <iostream>
int main(){
    //we can declare integers as signed and unsigned
    signed int a=-5;
    unsigned int b=4;
    //by default int is signed
    unsigned int c=a+b;// in this case the type will overfloe as -1 out of range
    std::cout<<c;
    unsigned int d=c;//will throw error
    //Additionaly we can use the short and long keywords as follows
    short s{34};
    short int si{122};
    //unsigned short int usi{-3};//throws error
    std::cout<<si<<"\n";
    long l{888};
    signed long int sli{-34454};
    std::cout<<"Enter unisigned num";
    std::cin>>c;
    std::cout<<c;
    return 0;
}