#include <iostream>

void printArrays(int a[], int size);

using namespace std;


int main() {

    int a[] = {4,2,-6,3,-3,5};
    int size = sizeof(a)/sizeof(a[0]);
    printArrays(a,size);
    return 0;
}

void printArrays(int a[], int n) {

    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum == 0){
                cout<<"subarray "<<i<<" "<<j <<endl;

            }

        }


    }

}
