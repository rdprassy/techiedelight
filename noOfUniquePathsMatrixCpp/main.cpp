#include <iostream>
#include <cstring>
#define N 4

void findUniquePaths(int a[][N], int b[][N], int x, int y, int newx, int newy);

bool issafe(int a[][N],int x, int y);

int finalCount = 0;



using namespace std;


int main() {
//    std::cout << "Hello, World!" << std::endl;

    int a[N][N]={
            { 1, 1, 1, 1 },
            { 1, 1, 0, 1 },
            { 0, 1, 0, 1 },
            { 1, 1, 1, 1 }
    };

    int b[N][N];

    memset(b,0, sizeof(b));




   findUniquePaths(a,b,0,0,3,3);

    cout<<finalCount;




    return 0;
}

void findUniquePaths(int a[][N], int b[][N], int x, int y, int newx, int newy) {

    if(x== newx && y==newy){
        finalCount++;
        return;


    }

    b[x][y]=1;

    if(issafe(a,x,y+1) && b[x][y+1]==0){
        findUniquePaths(a,b,x,y+1,newx,newy);
    }
    if(issafe(a,x+1,y) && b[x+1][y]==0){
        findUniquePaths(a,b,x+1,y,newx,newy);
    }
    if(issafe(a,x,y-1) && b[x][y-1]==0){
        findUniquePaths(a,b,x,y-1,newx,newy);
    }
    if(issafe(a,x-1,y) && b[x-1][y]==0){
        findUniquePaths(a,b,x-1,y,newx,newy);
    }

   b[x][y] =0;










}

bool issafe( int a[][N],int x, int y) {


    if(x<0 || x>=N || y<0 || y>=N || a[x][y]==0)
    return false;

    return true;
}
