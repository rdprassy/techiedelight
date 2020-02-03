#include <iostream>
#include <unordered_map>

using namespace std;


void printZeroSubArray(int a[], int n);

int main() {

    int a[] ={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(a)/sizeof(a[0]);
    printZeroSubArray(a,n);

    return 0;
}

void printZeroSubArray(int a[], int n) {

    unordered_multimap<int,int> mp;

    mp.insert(pair<int,int>(0,-1));

    int sum =0;
    for(int i=0;i<n;i++){
        sum+=a[i];

        if(mp.find(sum)!=mp.end()){


            auto it = mp.find(sum);

            while(it!=mp.end() && it->first == sum){
                cout<< "subarray found at "<<it->second+1<<"and "<<i<<endl;
                it++;
            }
        }
        mp.insert(pair<int,int>(sum,i));

    }












}



