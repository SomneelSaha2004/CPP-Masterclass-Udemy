#include <iostream>
/* 
    Compile - time error

    Run - time error : when there is a problem with logic of program, can cause the program to crash

    Warnings : will not cause an error but can cause problems 
*/
int main(){
    //compile time error - no binary created
   std::cout<<"Hello World!";

   //run time error
   int er=7/0;// when we compile the compiler givesus a warning
   std::cout<<er;
    return 0;
}