#include <iostream>

void printIndexChangeOfZeroToOne(int a[], int n);

using namespace std;


int main() {
//    std::cout << "Hello, World!" << std::endl;

    int a[] = {0,0,1,0,1,1,1,0,1,1};

    int n = sizeof(a)/sizeof(a[0]);

    printIndexChangeOfZeroToOne(a,n);


    return 0;
}

void printIndexChangeOfZeroToOne(int a[], int n) {

    int max_index = -1;
    int prev_index = -1;
    int max_count = 0;
    int count = 0;
    for(int i=0;i<n;i++){

        if (a[i]==1){
            count++;
        }
        else{
            count = i - prev_index;
            prev_index = i;
        }

        if(count > max_count){
            max_count = count;
            max_index = prev_index;
        }


    }

    cout<<"Please change the index of "<<max_index<<endl;



}
