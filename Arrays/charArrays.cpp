#include <iostream>
int main(){
    //can initialise char[] directly with a string literal(variables do not work)
    char arr[]{"Somneel Kumar Saha"};
    //we can also directly print them
    std::cout<<arr<<"\n";
    std::cin>>arr;
    std::cout<<arr;
   return 0;

}