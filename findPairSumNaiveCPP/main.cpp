#include <iostream>

using namespace std;


void findPair(int a[], int sum, int n ){

    for(int i =0; i< n-1; i++){
        for(int j=i+1;j< n;j++){
            if((a[i]+a[j]) == sum){
                printf("found things at indexes %d and %d \n ",i,j);
                cout<<"found sum being at"<<i<<" "<<j<<endl;
            }
        }
    }



}

int main() {

    int a[] = {4,5,6,7,8};

    int length = sizeof(a)/sizeof(a[0]);

    cout << length <<endl;

    findPair(a,12,length);






    return 0;
}