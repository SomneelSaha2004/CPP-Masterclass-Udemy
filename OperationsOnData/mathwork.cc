#include <iostream>
#include <iomanip>
#include <cmath>
int main(){double a1,a2,incr;
    std::cout<<"Enter range\n"<<"θ1 : ";
    std::cin>>a1;
    std::cout<<"θ2 : ";
    std::cin>>a2;
    std::cout<<"Enter angle increment : ";
    std::cin>>incr;
    std::cout<<"\nPrinting the trigo table for "<<a1<<"-->"<<a2<<"\n\n";
    std::cout<<std::left<<std::showpos<<std::showpoint;
    std::cout<<std::setw(15)<<"Angle"<<std::setw(15)<<"Sine"<<std::setw(15)<<"Cosine"<<std::setw(15)<<"Tangent"<<std::endl;
    for(int angle=a1;angle<=a2;angle=angle+incr){
        std::cout<<std::setw(15)<<angle<<std::setw(15)<<std::sin(angle)<<std::setw(15)<<std::cos(angle)<<std::setw(15)<<std::tan(angle)<<std::endl;
    }
    return 0;
}