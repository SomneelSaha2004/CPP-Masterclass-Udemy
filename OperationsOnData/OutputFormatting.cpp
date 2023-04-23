#include <iomanip>
#include <string>
#include <iostream>
#include <fstream>
/*
std::flush - causes data to be directly sent to terminal(no buffer)
std::setfill - to fill the space with a character
std::setw() - formatting 
*/
int main(){
    std::fstream file;
    std::cout<<"Enter number of people : ";int n;
    std::cin>>n;
    std::string f;
    std::string l;
    double age;
    file.open("data.txt",std::ios::app);
    file<<std::setw(10)<<"First Name"<<std::setw(15)<<"Last Name"<<std::setw(5)<<"Age"<<"\n";
    std::cout<<"Enter details"<<"\n";
    for(int i=0;i<n;i++){
        std::cout<<"Enter first name : ";
        std::cin>>f;
        std::cout<<"Enter last name : ";
        std::cin>>l;
        std::cout<<"Enter age : ";
        std::cin>>age;
        std::cout<<std::endl;
        std::cin.ignore();
    
        file<<std::setw(10)<<f<<std::setw(15)<<l<<std::setw(5)<<age<<"\n";
    }
    file.close();
    file.open("data.txt");std::string line;
    while(getline(file,line)){
        std::cout<<line<<"\n";
    }
    file.close();
    return 0;
}