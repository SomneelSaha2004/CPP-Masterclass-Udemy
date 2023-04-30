#include <iostream>
#include <iomanip>
#include <string>
int main(){
    int year;int day;
    std::cout<<"Enter a year : ";
    std::cin>>year;
    std::cout<<"Enter the first day of the year [1:Monday,.....7:Sunday] : ";
    std::cin>>day;
    std::string week[]={"Mon","Tue","Wed","Thurs","Fri","Sat","Sun"};
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    std::string months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    bool start=
    std::cout<<"Calender for "<<year<<"\n\n";
    for(int i=1;i<=12;i++){
        std::cout<<"    "<<months[i]<<" "<<year<<"\n";
        for(std::string d:week){
            std::cout<<std::setw(10)<<d;
        }
        std::cout<<"\n";
        int c=0;
        int count=0;
        for(int i=0;i<days[i-1];i++){
            count++;
            if(count!=day){
                continue;
            }
        }
    }
}