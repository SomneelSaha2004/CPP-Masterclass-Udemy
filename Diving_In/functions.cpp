
int add(int a,int b){
    return a+b;
}
#include <iostream>
int main(){
    int a{34},b{56};
    int sum=a+b;
    std::cout<<sum<<"\n";
    sum=add(34,52);
    std::cout<<sum<<"\n";
    std::cout<<add(a,2+45)<<std::endl;
    return 0;
}