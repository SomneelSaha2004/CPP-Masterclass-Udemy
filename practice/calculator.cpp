#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>
#include <bitset>
void print(){
   std:: fstream f("calculator.txt");std::string line;
   while(getline(f,line)){
    std::cout<<line<<std::endl;
   }
}
bool checkOperator(char op){
    char operators[]={'+','-','*','/','t','s','c','o','h','b','p','q'};
    for(char val: operators){
        if(val==op){return true;}
    }
    return false;
}
int main(){
    
    std::cout<<"        "<<"Welcome to Calculator 2.0"<<std::endl;
    std::cout<<"Basic : + -> Add    - -> Substract  * -> Mutliply   / -> Divide\n";
    std::cout<<"Trigonometry :  t -> tan(x) s -> sin(x) c -> cos(x)\n";
    std::cout<<"Number systems : o -> octal h -> hexadecimal    b-> binary\n";
    std::cout<<"To print history enter p\nTo quit enter q\n\n";
    std::cout<<std::left<<std::showbase;std::fstream f("calculator.txt",std::ios::app);
    while(true){char op;double a,b,theta,sum;std::string out;
        
        std::cout<<"Enter operation : ";
        
        std::cin>>op;
       if(!checkOperator(op)){
            std::cout<<"This operation is not supported!\n\n";
            continue;
       }
        if(op=='q'){break;}
        else if(op=='p'){print();}
        if(op=='+'||op=='-'||op=='/'||op=='*'){
            std::cout<<"    number 1 : ";
            std::cin>>a;
            std::cout<<"    number 2 : ";
            std::cin>>b;
            switch(op){
                case '+':
                sum=a+b;break;
                case '-':
                sum=a-b;break;
                case '*':
                sum=a*b;break;
                case '/':
                sum=a/b;break;
            }
            std::cout<<a<<op<<b<<" = "<<sum<<"\n";
            f<<a<<op<<b<<" = "<<sum<<"\n";
        }else if(op=='t'||op=='s'||op=='c'){
            std::cout<<"     θ: ";
            std::cin>>theta;
            switch(op){
                case 't':
                sum=std::tan(theta);out="tan ";break;
                case 's':
                sum=std::sin(theta);out="sin ";break;
                case 'c':
                sum=std::cos(theta);out="cos ";break;
            }
            std::cout<<out<<theta<<" = "<<sum<<"\n";
            f<<out<<theta<<" = "<<sum<<"\n";
        }else if(op=='o'||op=='h'||op=='b'){
            int o;
            std::cout<<"     value: ";
            std::cin>>o;
            switch(op){
                
                case 'o':
                
                std::cout<<"octal "<<o<<" = "<<std::oct<<o<<"\n";
                f<<"octal "<<o<<" = "<<std::oct<<o<<"\n";break;
                case 'h':
               
                std::cout<<"hexadeximal "<<o<<" = "<<std::hex<<o<<"\n";
                f<<"hexadeximal "<<o<<" = "<<std::hex<<o<<"\n";
                break;
                case 'b':
               
                std::cout<<"binary "<<o<<" = "<<std::bitset<32>(o)<<"\n";
                f<<"binary  "<<o<<" = "<<std::bitset<32>(o)<<"\n";
                break;
            }
            f.close();
        }

        }
        return 0;
    }
    
