#include <iostream>
#include <cstring>

#define N 8

void nQueen(char a[][N], int r);

bool isSafe(char a[][N], int r, int i);

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;

    char a[N][N];

    memset(a,'-',sizeof(a));
    nQueen(a,0);
    return 0;
}

void nQueen(char a[][N], int r) {



        if(r==N){
            for(int i=0;i<N; i++) {
                cout <<endl;
                for(int j=0;j<N;j++){
                    cout<<a[i][j];


            }
        }

    }

        for(int i =0;i<N;i++){

            if(isSafe(a,r,i)){

                a[r][i] = 'Q';
                nQueen(a,r+1);


                a[r][i]= '-';


            }
        }



}

bool isSafe(char a[][N], int r, int c) {

    //checking if the column is ok

    for(int i=0;i<r;i++){
        if(a[i][c] == 'Q'){
            return false;
        }
    }

    //checking if the upper diagonal  \ is ok

    for(int i=r,j=c;i>=0 &&j>=0;i--,j--){
        if(a[i][j] == 'Q'){
            return false;
        }
    }


    // check if the diagonal '/' is ok

    for(int i=r,j=c;i>=0 &&j<N;i--,j++){
        if(a[i][j] == 'Q'){
            return false;
        }
    }



    return true;
}
