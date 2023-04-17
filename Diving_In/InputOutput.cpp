/*
std::cout - for output
std::cin - for taking user input
std::cerr - printing error messages
std::clog - print log messages to console
*/
#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout<<"Enter your name : ";
    std::cin>>name;
    int age;
    std::cout<<"Enter age : ";
    std::cin>>age;
    //error message
    std::cerr<<"There was an error";

    //log message
    std::clog<<"Log 1";
    int h,w;
    std::cout<<"Enter height and weight"<<std::endl;
    std::cin>>h>>w;
    std::cout<<h+w;

    std::cout<<name<<age;

    //To get string input containing strings use getline
    std::cin.ignore();
    std::cout<<"Enter your full name : ";
    std::getline(std::cin,name);
    std::cout<<"Hey "<<name<<"\n";

    std::cout<<"Enter your full name and age"<<std::endl;
    
    std::cin>>age;std::cin.ignore();
    std::getline(std::cin,name);
    std::cout<<name<<age;
    return 0;
}