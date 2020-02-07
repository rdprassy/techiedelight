#include <iostream>

void findDup(int a[],int n);

void findDup1(int a[],int n);

void findDup2(int a[],int n);

void findDup3(int a[],int n);

using namespace std;
int main() {
//    std::cout << "Hello, World!" << std::endl;

int a[] = {1,2,4,4,3};
    int n = sizeof(a)/sizeof(a[0]);
findDup(a,n);
    findDup1(a,n);

   findDup2(a,n);

  int b[] = {1,2,4,3,2};



    findDup3(b,n);

    return 0;
}

void findDup(int a[],int n) {

    //find given sum



   // cout<<n<<endl;

    int sum =0;
    for(int i=0;i<n;i++) {
        sum += a[i];
    }


    int actual=(n*(n-1))/2;

    cout<<sum-actual;


}


void findDup1(int a[],int n) {

    bool visit[n+1];

    for(int i=0;i<n+1;i++)
        visit[i]= false;

    for(int i=0; i<n;i++){

        if(visit[a[i]]){
            cout<<a[i];
        }
        else{
            visit[a[i]] = true;
        }
    }


}


void findDup2(int a[],int n){

    for(int i=0;i<n;i++){

        int val = abs(a[i]);
        if(a[val-1] >=0){
            a[val-1] = -a[val-1];
        }
        else{
            cout<<abs(a[i]);
        }


    }
}

void findDup3(int a[],int n){
    int xor1 = 0;
    for(int i=0;i<n;i++){
        xor1^=a[i];
//        cout<<xor1<<endl;

    }

    for(int i=1;i<=n-1;i++){
        xor1^=i;
//        cout<<xor1<<endl;

    }
 cout<<xor1<<endl;
}
