#include <iostream>

using namespace std;

void dutch3sort(int a[], int n);

void swap (int a[],int i, int j);

int main() {
//    std::cout << "Hello, World!" << std::endl;

    int a[] = {0,1,2,2,1,0,0,2,0,1,1,0};
    int n = sizeof(a)/sizeof(a[0]);

    dutch3sort(a,n);
for(int i=0;i<n;i++)
    cout<<a[i]<<"";

cout<<endl;


    return 0;
}


void swap(int a[],int i,int j){

    int temp;
    temp =a[i];
    a[i] = a[j];
    a[j] = temp;

}

void dutch3sort(int a[], int n) {

    int start =0;

    int mid =0;

    int end = n-1;

    int pivot =1;

    while (mid<=end){

        if(a[mid]<pivot){

            swap(a,mid,start);
            mid++;
            start++;

        }
        else if(a[mid]>pivot){
            swap(a,mid,end);
            --end;

        }
        else{
            ++mid;
        }
    }







}
