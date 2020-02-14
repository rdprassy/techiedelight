#include <iostream>

void merge(int x[], int y[], int m, int n);


void printArray(int a[],int m);

void swap(int ,int, int a[], int b[] );

using namespace std;

int main() {
   // std::cout << "Hello, World!" << std::endl;

   int x[] = {1,4,7,8,10};
   int y[] ={2,3,9};

   int m = sizeof(x)/sizeof(x[0]);
   int n = sizeof(y)/sizeof(y[0]);

   merge(x,y,m,n);

   printArray(x,m);
   printArray(y,n);


    return 0;
}

void merge(int x[], int y[], int m, int n) {

    for(int i=0;i<m;i++){

        if(x[i] > y[0]){

            swap(i,0,x,y);

            int len = y[0],k;

            for(k=1;k<n && y[k]<len;k++){

                y[k-1]= y[k];


            }
            y[k-1] =len;


        }

    }



}

void printArray(int a[],int m){

    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";

    }

    cout<<endl;
}

void swap(int i,int j, int a[], int b[] ){

    int temp = a[i];
    a[i]= b[j];
    b[j]= temp;
}
