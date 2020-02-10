#include <iostream>
#include <unordered_map>

void printIndices(int a[], int n, int s);
void printIndicesNaive(int a[], int n, int s);

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
int a[] = {5,6,-5,5,3,5,3,-2,0};
int s = 8;
int n = sizeof(a)/ sizeof(a[0]);
printIndices(a,n,s);

    printIndicesNaive(a,n,s);
    return 0;
}

void printIndices(int a[], int n, int s) {

    unordered_map<int,int> mp;
   // mp[0] = -1;
    int endIndex=0;
    int length =0;
    int sum =0;
    for(int i=0;i<n;i++) {
        sum += a[i];


        if (mp.find(sum) == mp.end()) {

            mp[sum] = i;


        }

        if (mp.find(sum - s) != mp.end() && length < i- mp[sum - s]){

            length = i - mp[sum - s];
            endIndex = i;

        }

    }

    cout<<"array is "<<endIndex-length+1<<"and "<<endIndex<<endl;

}

void printIndicesNaive(int a[], int n, int s) {
    int sum;
    int length =0;
    int endIndex = 0 ;
    for(int i=0;i<n;i++){
         sum =0;
        for(int j=i;j<n;j++) {
            sum += a[j];


            if (sum == s && length < (j - i + 1) ){
                length = j-i+1;
                endIndex = j;
            }
        }
    }

    cout<<"array is "<<endIndex-length+1<<"and "<<endIndex<<endl;

}
