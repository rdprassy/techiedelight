#include <iostream>
#include <unordered_map>

void printSubArray(int a[], int n);

void printSubArrayOrder(int a[], int n);

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int a[] = {0,0,1,0,1,0,0};

   // int a[] = {0,0,0,0,0,0,0};

    int n = sizeof(a)/sizeof(a[0]);

    printSubArray(a,n);

    printSubArrayOrder(a,n);

    return 0;
}

void printSubArray(int a[], int n) {
    int endIndex = 0;
    int length = 0;

    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            // subarrays ending with j
            sum+=((a[j]==0)?-1:a[j]);

            if(sum == 0){
                if(length < (j-i+1)) {
                    endIndex = j;
                    length = j - i + 1;
                }

            }


        }
    }

    if (length==0){
        cout<<"no subarray with zero sum found"<<endl;
    }
    else{
        cout<<"subarray with indexes "<<endIndex-length+1<<"and "<<endIndex<<endl;
    }

}

void printSubArrayOrder(int a[], int n) {

    unordered_map<int, int> mp;

    int endIndex = -1;
    int length = 0;
    int sum = 0;
    mp[0]=-1;

    for(int i = 0; i < n; i++) {

        sum += ((a[i] == 0) ? -1 : a[i]);

        if(mp.find(sum)!=mp.end()){

            if(length<i-mp[sum]){
                length = i-mp[sum];
                endIndex =i;
            }


        }
        else{
            mp[sum]=i;
        }

    }

    if(endIndex!=-1){
        cout<<"subarray with indexes "<<endIndex-length+1<<"and "<<endIndex<<endl;
    }
    else{
        cout<<"no subarray with zero sum found"<<endl;
    }
}
