/*
float - 4bytes
double - 8bytes
long double -12
*/
#include <iomanip>//needed for setprecision
#include <iostream>
int main(){
    float f{1.234324223230f};
    double d{12.12343212121};
    long double ld{1.234232231212};
    //we can control the precision
    std::cout<<std::setprecision(10);
    //std::cout<<f<<"\n"<<d<<std::endl;
    //can also control input precision
    std::cin>>std::setprecision(3);
    //std::cin>>f;
    //std::cout<<f;
    //below will throw error
    //float n{19292929};
    //belo will not, as excess is truncated
    float f2(19292929);
    // we can also use scientific notation using e5
    double sci{2.34e2};
    std::cout<<sci<<std::endl;
    sci=4.24e-2;
    std::cout<<sci;
    //in theese types we can divide by 0
    double i1{3.0/0.0};//+inf
    double i2{-2.0/0.0};//-inf
    double NotANum{0.0/0.0};//nan
    std::cout<<i1<<i2<<NotANum;
     f2=19144141.0f;
     sci=19144141.0f;//f suffix converts to float despite type being double
     int i=3.9;
    std::cout<<sci<<i;
    return 0;
}