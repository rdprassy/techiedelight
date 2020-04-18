#include <iostream>
#include<bitset>

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int a =20;
    int k=3;
    //turn off kth bit
    int z = a & (~(1<<(k-1)));

    cout<<z<<endl;
    k= 2;
    // turn on kth bit
    z = a | ((1<<(k-1)));
    cout<<z<<endl;
    k=3;

    //check if the kth bit is set



    // toggle the kth bit
    z = a ^ ((1<<(k-1)));

    cout<<z<<endl;

    z = a & ((1<<(k-1)));

            if(z>0){
                cout<< "kth bit is set"<<endl;
            }
            else{
                cout<< "kth bit is not set"<<endl;
            }

    return 0;
}
