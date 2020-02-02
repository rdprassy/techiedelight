#include <iostream>
#include<unordered_set>

using namespace std;

bool findZeroSumArray(int a[], int size);

int main() {


    int a[] = {1,4,6,-5,-9};

    int size = sizeof(a)/sizeof(a[0]);
    bool res = findZeroSumArray(a,size);
    cout<< res <<endl;

    return 0;
}

bool findZeroSumArray(int a[], int size) {

    unordered_set<int> us;
    us.insert(0);
    int sum =0;
    for(int i=0;i<size;i++){

        sum+=a[i];

        if(us.find(sum) != us.end()){

            return true;
        }

    }

    return false;




}
