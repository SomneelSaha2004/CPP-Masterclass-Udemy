#include <iostream>
int main(){double f,c;
    std::cout<<"Please enter a degree value in Celsius : ";
    std::cin>>c;
    f = (9.0 / 5) * c + 32;
    std::cout<<c<<" Celsius is "<<f<<" Fahrenheit"<<std::endl;
    return 0;
}