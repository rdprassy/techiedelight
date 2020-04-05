#include <iostream>
#include <cstring>

#define N 5

void knight(int a[][N], int x, int y, int pos);

void print(int a[][N]);

bool issafe(int newx, int newy);

int xo[] = { 2, 1, -1, -2, -2, -1,  1,  2 , 2 };


int yo[] =  { 1, 2,  2,  1, -1, -2, -2, -1, 1 };

using namespace std;
int main() {
//    std::cout << "Hello, World!" << std::endl;

    int a[N][N];
    memset(a,0,sizeof(a));

    int pos =1;

    knight(a,0,0,pos);


    return 0;
}



void knight(int a[][N], int x, int y, int pos) {

    // goal is to first visit it
    a[x][y]=pos;

    if(pos >= N*N){
        print(a);

       a[x][y]=0;
        return;
    }





    for(int k=0;k<8;k++) {

        int newx = x+xo[k];

        int newy = y+yo[k];


        if (issafe(newx,newy) && !a[newx][newy]){

            knight(a,newx,newy,pos+1);


        }
    }

        a[x][y] = 0;





}

bool issafe(int newx, int newy) {

    if(newx<0 || newx>=N || newy<0 || newy>N){
        return false;

    }
    return true;
}

void print(int a[][N]) {

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }

}
