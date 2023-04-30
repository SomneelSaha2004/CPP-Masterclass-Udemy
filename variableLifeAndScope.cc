#include <iostream>

int a{23};//global variable
void print(int n){
    int b=3;//local variable can only be used in this func
    static int c=3.4;//
    std::cout<<n<<"\n";
    
}
int main(){
    //trying to acess prev defined vars
    print(a);
    //print(b);
    //print(c);
    {
        int e=45;//limited to this nested brackets

    }
    //print(e); --> will throw error
    return 0;
}
