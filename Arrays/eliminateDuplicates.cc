#include <iostream>
int main(){
    int numbers[]={1,2,4,5,1,8,2,3,6,1,4,2};
    int len=std::size(numbers);bool unique;
   int arr[len];int count=0;
   for(int n:numbers){
    unique=true;
       for(int c:arr){
           if(n==c){
                unique=false;
               continue;
           }
           
       }
       if(unique){
        arr[count]=n;
           count++;
       }
   }
   std::cout<<"The collection contains "<<count<<" unique numbers, they are : ";
   for(int i=0;i<count;i++){
    std::cout<<arr[i]<<" ";
   }  
   return 0;
}