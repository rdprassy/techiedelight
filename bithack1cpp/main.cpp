#include <iostream>
using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;

//even or odd
    int a =4;
    int b=6;

    if(a&1){
        cout<<"odd"<<endl;
    } else
        cout<<"even"<<endl;

    a=-5;
    //2 integer opp

    if((a^b)>0){
        cout<<"same sign"<<endl;
    }
    else{
        cout<<"different sign"<<endl;
    }
    //add one to integer

    cout<<-~a<<endl;

    a=a^b;
    b=a^b;
    a=a^b;

    cout<<a<<""<<b<<endl;


    return 0;
}
