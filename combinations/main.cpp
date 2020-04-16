#include <iostream>
#include<vector>



using namespace std;

void printcombination(vector<int> a,int k ,int N) {
    if(k>N){
       for(int j:a){
           cout<<j<<" ";
       }
       cout<<endl;
        return;
    }

    for(int i=0;i<2*N;i++){

        if(a[i]==-1 && (i+k+1)<(2*N) && a[i+k+1]==-1 ) {

            a[i] = k;
            a[i + k + 1] = k;


            printcombination(a, k + 1, N);
            a[i] = -1;
            a[i + k + 1] = -1;

        }
    }




}

int main() {
//    std::cout << "Hello, World!" << std::endl;
int N =7;
vector<int> a(2*N,-1);

printcombination(a,1,N);

    return 0;
}


