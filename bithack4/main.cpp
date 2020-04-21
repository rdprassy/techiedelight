#include <iostream>
#include<bitset>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;


    //convert uppercase to lowercase

    for(char i='A';i<='Z';i++){
        cout<<char(i | char(32));
    }

    cout<<endl;

    // convert lowercase to uppercase

    for(char i='a';i<='z';i++){
        cout<<char(i & char(95));
    }

    cout<<endl;



    //invert alphabets case

    for(char i='a';i<='z';i++){
        cout<<char(i ^ char(32));
    }


     cout<<endl;
    for(char i='A';i<='Z';i++){
        cout<<char(i ^ char(32));
    }

    //find alphabets position

    cout<<endl;
    for(char i='A';i<'Z';i++){
        cout<<int(i&31);
    }


    return 0;
}
