#include <iostream>
int main(){
    int arr[][2][3]{//compiler will infer the no of rows
        {
            {1,2,3},{4,5,6}
        },
        {
            {7,8,9},{10,11,12}
        },
        {
            {2,3,4},{2}//compiler will auto fill the missing elements with 0's
        }
    };
    for(int i=0;i<std::size(arr);i++){
        for(int j=0;j<std::size(arr[i]);j++){
            for(int k=0;k<std::size(arr[i][j]);k++){
                std::cout<<arr[i][j][k]<<" ";
            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }
    return 0;
}