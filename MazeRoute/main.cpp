#include <iostream>
#include<cstring>
using namespace std;

#define M 10
#define N 10

int maxlength = 101;


void findLargestLength(int a[][N], int b[][N], int startx,int starty, int endx, int endy, int length);

bool issafe(int startx, int starty);

int main() {
//    std::cout << "Hello, World!" << std::endl;

    int a[M][N] = 	{
            { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
            { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
            { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
            { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
            { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
            { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
            { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
            { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
            { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
            { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
    };

    int b[M][N];

    memset(b,0, sizeof(a));

    int startx =0, starty=0, endx=7, endy =5, length = 0;

    findLargestLength(a,b,startx,starty,endx,endy,length);

    cout<<maxlength<<endl;
    return 0;
}

void findLargestLength(int a[][N], int b[][N], int startx, int starty ,int endx,int endy, int length) {



    if(startx == endx && starty == endy){

        if(length<maxlength){   //use > for max and < for min
            maxlength = length;
            b[startx][starty] =0;

            cout<<"reached_max"<<endl;
        }


        return;

    }

    b[startx][starty] =1;

    if(issafe(startx,starty+1) && a [startx][starty+1]==1 && b[startx][starty+1]==0) {

//        cout<<"reached "<<startx<<" "<<starty<<endl;
        findLargestLength(a, b, startx, starty+1 ,endx, endy,  length+1);


    }

    if(issafe(startx,starty-1) && a [startx][starty-1]==1 && b[startx][starty-1]==0) {
        findLargestLength(a, b, startx, starty-1 ,endx, endy,  length+1);
//        cout<<"reached "<<startx<<" "<<starty<<endl;

    }

    if(issafe(startx+1,starty) && a [startx+1][starty]==1 && b[startx+1][starty]==0) {
        findLargestLength(a, b, startx+1, starty ,endx, endy,  length+1);
//        cout<<"reached "<<startx<<" "<<starty<<endl;

    }

    if(issafe(startx-1,starty) && a [startx-1][starty]==1 && b[startx-1][starty]==0) {
        findLargestLength(a, b, startx-1, starty ,endx, endy,  length+1);
//        cout<<"reached "<<startx<<" "<<starty<<endl;

    }

    b[startx][starty] = 0;





}

bool issafe(int startx, int starty) {

    if(startx<0 || startx>=M || starty <0 || starty >=N)
    return false;
    else
        return true;
}
