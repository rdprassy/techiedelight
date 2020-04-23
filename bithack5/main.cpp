#include <iostream>
#include<bitset>

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;

/* finding the  abs of  a number with bit hacks*/
    int a =6;
    int b =-6;

    int mask = a>>(sizeof(int)*8)-1;
    cout<< mask;

    int mask1 = b>>(sizeof(int)*8)-1;
    cout<< mask1;

    //finding absolute ensuring max flips the bits on xor

    cout<<((a+mask)^mask);
    cout<<((b+mask1)^mask1);


    return 0;
}
