#include <iostream>
#include <iomanip>
int generate(){
    std::srand(std::time(0));
    return std::rand()%3;
}
int main(){
    char arr[]{'R','P','S'};
    std::cout<<"Welcome to Rock,Paper and Scissors!\n";
    std::cout<<"R - Rock"<<std::setw(10)<<"P - Paper"<<std::setw(10)<<"S - Scissors"<<std::endl;
    std::cout<<"Enter Q to quit\n\n";
    char in;
    while(true){
        std::cout<<"> ";
        std::cin>>in;
        int out=generate();
       // std::cout<<c<<"\n";
        char c=arr[out];
        std::cout<<c<<std::endl;
        switch(in){
            case 'R':
            
            if(c=='R'){
                
                std::cout<<"Computer throws "<<c<<"\nIts a Draw!\n";

            }else if(c=='P'){
                std::cout<<"Computer throws "<<c<<"\nComputer Wins!\n";
            }else if(c=='S'){
                std::cout<<"Computer throws "<<c<<"\nYou Win!!\n";
            }
            break;
        
            case 'P':
            
            if(c=='P'){
                std::cout<<"Computer throws "<<c<<"\nIts a Draw!\n";

            }else if(c=='S'){
                std::cout<<"Computer throws "<<c<<"\nComputer Wins!\n";
            }else if(c=='R'){
                std::cout<<"Computer throws "<<c<<"\nYou Win!!\n";
            }
            break;
            case 'S':
            if(c=='S'){
                std::cout<<"Computer throws "<<c<<"\nIts a Draw!\n";

            }else if(c=='R'){
                std::cout<<"Computer throws "<<c<<"\nComputer Wins!\n";
            }else if(c=='P'){
                std::cout<<"Computer throws "<<c<<"\nYou Win!!\n";
            }
            break;
            default:
            std::cout<<"Invalid Input\n\n";
            break;
           
        }
        if(in=='Q'){
            std::cout<<"Good Game !\n\n";
            break;
        }
    }
}