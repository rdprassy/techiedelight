#include <iostream>



using namespace std;

void perm(string s, int i, int N) {
    cout<<"inside perm("<<s<<","<<i<<","<<N<<")"<<endl;

    if(i==N-1){
        cout<<s<<endl;
        return;
    }

    for(int j=i;j<N;j++){


        cout<<"swapped "<<s[i]<<" and "<<s[j]<<endl;
        swap(s[i],s[j]);

        perm(s,i+1,N);
        cout<<"swapped "<<s[i]<<" and "<<s[j]<<endl;
        swap(s[i],s[j]);
    }


}


int main() {
//    std::cout << "Hello, World!" << std::endl;

    string s ="abc";
    perm(s,0,s.length());

    return 0;
}

