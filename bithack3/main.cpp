#include <iostream>
#include<cmath>
using namespace std;


int main() {
//    std::cout << "Hello, World!" << std::endl;

//checking if a given number is a power of 2 or not.

int n = 32;

if(n&(n-1)){
    cout<< "not a power of 2"<<endl;
}
else{
    cout<<"its a power of 2"<<endl;
}


//find postion of the rightmost bit

int z = (n&(n-1))^n;

cout<<log2(z)+1<<endl;

//one more way doing the same

cout<<log2(n&(-n))+1<<endl;

//position of the only set bit

if((n&(n-1))==0){

    cout<<log2(n)+1<<endl;



}else{
    cout<<"this is not how you deal things."<<endl;
}

//parity of things.

bool parity = false;
while(n!=0){
    parity=!parity;
    n=n&(n-1);

}

if(parity){
    cout<<"odd parity"<<endl;
}
else{
    cout<<"even parity"<<endl;
}
    n =32;
parity = false;

    while(n){
        if(n&1){
            parity = !parity;
        }
        n=n>>1;
        }

    if(parity){
        cout<<"odd parity"<<endl;
    }
    else{
        cout<<"even parity"<<endl;
    }





    return 0;
}
