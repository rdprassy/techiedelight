#include <iostream>
#include<unordered_map>

void findPairSumMap(int a[], int pairsum, int n);

using namespace std;



void findPairSumMap(int a[], int pairsum, int n) {


    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){

        if(mp.find((pairsum - a[i]))!= mp.end()){

            int res = mp[(pairsum-a[i])];

            cout<<"map found at "<<i<<" and"<<res;

            return;



        }

        mp[a[i]]=i;



//    else{
//
//
//
//
//    }

    }

    cout<<"pair not found"<<endl;









}

int main() {
    int a[] = {4,5,6,7,8};

    int n = sizeof(a)/sizeof(a[0]);



    findPairSumMap(a,12,n);
    return 0;
}
