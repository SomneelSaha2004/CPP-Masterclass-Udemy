#include <iostream>
bool valid(int arr[],int size,int k){
    for(int i=0;i<size;i++){
        if(arr[i]==k){
            return false;
        }
    }
    return true;
}
void common_elements(int a[], int b[]){
   // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10
   
  //Don't modify anything above this line
  //Your code will go below this line
  int arr[10];int count=0;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(a[i]==b[j]){
            if(!valid(arr,10,a[i])){
                continue;
            }
            arr[count++]=a[i];
        }
    }
  }
  std::cout<<"There are "<<count<<" common elements they are : ";
  for(int i=0;i<count;i++){
    std::cout<<arr[i]<<" ";
  }
  //Your code will go above this line
  //Don't modify anything after this line

}
int main(){
    int a[]={1,2,4,5,9,3,6,7,44,55},b[]={11,2,44,45,49,43,46,47,55,88};
    common_elements(a,b);
    int arr[3][4];
    std::cout<<sizeof(arr);
    return 0;
}