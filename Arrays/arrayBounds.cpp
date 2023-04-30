#include <iostream>
//c++ will allow us to acess memeory locations outside bounds
//we dont own  the memory we acess in this manner
int main(){
    int arr[]{12,3,4,4};
    arr[121212]=34;
    std::cout<<arr[1232]<<"\n";
    return 0;
}
