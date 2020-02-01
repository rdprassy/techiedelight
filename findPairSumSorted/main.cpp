#include <iostream>
#include<algorithm>

using namespace std;

void findPairSum(int a[], int space, int i);

int main() {



    int arr[] = {4,5,6,7,8};
    int space = sizeof(arr)/sizeof(arr[0]);
    findPairSum(arr,space,12);
    return 0;
}

void findPairSum(int arr[], int space, int i){

    int low = 0;
    int high = space -1;

    sort(arr,arr+space);


    while(low<high){

        if (arr[low]+arr[high]==i){
            cout<< " found sum with indexes "<< low <<"  "<<high<<endl;
            return;
        }

        (arr[low]+arr[high]<i)?low++:high--;

        cout<<"no pair found"<<endl;




    }

}
