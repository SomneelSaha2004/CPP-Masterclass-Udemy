#include <iostream>
#include <array>
bool isPresent(char ch,char arr[],int size){
    
        for(int i=0;i<size;i++){
            if(ch==arr[i]){return true;}
        }
        return false;
  }
int main(){
    

  unsigned int vowel_count{};//Initialized to zero
  char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d'};int size=std::size(message);
  //Don't modify anything above this line
  //Your code should go below this line
  
  std::cout<<message<<"\n";
  char check[6];int index=0;
    char vowels[]={'a','e','i','o','u'};
  for(int i=0;i<size;i++){
      for(int j=0;j<6;j++){
          if(message[i]==vowels[j]){
            if(isPresent(message[i],check,size)){
              std::cout<<check;
                continue;
            }
            check[vowel_count]=message[i];
            vowel_count++;
            
          }
      }
  }
  
  
  //Your code should go above this line
  //Don't modify anything below this line
  
  
  std::cout << "The string : " << message << " has " << vowel_count << " vowels";
    
}
