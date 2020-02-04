#include <iostream>
using namespace std;

void take(int a[],int n);
void take1(int a[],int n);
void take2(int a[],int n);

int main() {
    int size;
    int a[] = {1,0,0,1,1,0,1,0};
    size = sizeof(a)/sizeof(a[0]);
    take(a,size);


    for(int i=0;i<size;i++)
    cout<<a[i]<<endl;
    int b[] = {1,0,0,1,1,0,1,0,0,0,1};
    size = sizeof(b)/sizeof(b[0]);
    take1(b,size);
    for(int i=0;i<size;i++)
        cout<<b[i]<<endl;


    int c[] = {1,0,0,1,1,0,1,0,0,0,1};
    size = sizeof(c)/sizeof(c[0]);
    take2(c,size);
    for(int i=0;i<size;i++)
        cout<<c[i]<<endl;
    return 0;
}

void take(int a[],int n){
    int c1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            c1++;
    }

    for(int i=0;i<n;i++){
        if(i<c1)
            a[i]=0;
        else
            a[i] =1;
    }

}


void take1(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) {
            a[j] = a[i];
            j++;
        }
    }

    for(int i=j;i<n;i++){
        a[i]=1;
    }






}

void swap(int a[],int i,int j){
    a[i]= a[i]+a[j];
    a[j]= a[i]-a[j];
    a[i]= a[i]-a[j];
}

void take2(int a[],int n){
    int pivot =1;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<pivot){
            swap(a,i,j);
            j++;


        }
    }



}


