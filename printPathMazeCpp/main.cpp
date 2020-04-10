#include <iostream>
#include<vector>
#include<algorithm>
#define N 10



using namespace std;


typedef pair<int,int>  Node;

void printPaths(int a[][N], vector<Node> b,int x,int y, int startx, int starty);

void print(vector<Node> vector);

bool issafe(int x, int y);

bool notRepeated(vector<Node> vector, int x, int y);

int a1[] ={0, 1, 0, -1};
int b1[]  ={1,0,-1,0};

int main() {


    int a[N][N] =
            {
                    { 7, 1, 3, 5, 3, 6, 1, 1, 7, 5 },
                    { 2, 3, 6, 1, 1, 6, 6, 6, 1, 2 },
                    { 6, 1, 7, 2, 1, 4, 7, 6, 6, 2 },
                    { 6, 6, 7, 1, 3, 3, 5, 1, 3, 4 },
                    { 5, 5, 6, 1, 5, 4, 6, 1, 7, 4 },
                    { 3, 5, 5, 2, 7, 5, 3, 4, 3, 6 },
                    { 4, 1, 4, 3, 6, 4, 5, 3, 2, 6 },
                    { 4, 4, 1, 7, 4, 3, 3, 1, 4, 2 },
                    { 4, 4, 5, 1, 5, 2, 3, 5, 3, 5 },
                    { 3, 6, 3, 5, 2, 2, 6, 4, 2, 1 }
            };



    vector<Node> b;

    printPaths(a,b,0,0,N-1,N-1);


    return 0;
}

void printPaths(int a[][N], vector<Node> b,int x,int y, int startx, int starty) {
    b.push_back(make_pair(x,y));

if(x==startx && y==starty){
    //path found so need to print the vector array from start to last
//    cout<<"reached endgame" <<x<<" " <<y<<endl;
    print(b);
    return;
}



    if(issafe(x,y+b1[0]*a[x][y]) && notRepeated(b,x,y+b1[0]*a[x][y])){

//        cout<<"reached location" <<x<<" " <<y<<endl;
//        print(b);


        printPaths(a,b,x,y+b1[0]*a[x][y],startx,starty);

    }

    if(issafe(x+a1[1]*a[x][y],y) && notRepeated(b,x+a1[1]*a[x][y],y)){

//      cout<<"reached location" <<x<<" " <<y<<endl;
//
//        print(b);

        printPaths(a,b,x+a1[1]*a[x][y],y,startx,starty);

    }

    if(issafe(x,y+b1[2]*a[x][y]) && notRepeated(b,x,y+b1[2]*a[x][y])){

//        cout<<"reached location" <<x<<" " <<y<<endl;
//
//        print(b);
        printPaths(a,b,x,y+b1[2]*a[x][y],startx,starty);

    }

    if(issafe(x+a1[3]*a[x][y],y) && notRepeated(b,x+a1[3]*a[x][y],y)){

//        cout<<"reached location" <<x<<" " <<y<<endl;
//        print(b);

        printPaths(a,b,x+a1[3]*a[x][y],y,startx,starty);

    }
    b.pop_back();








}

bool notRepeated(vector<Node> b, int x, int y) {

    if(find(b.begin(),b.end(),make_pair(x,y)) == b.end())
    return true;
    return false;
}

bool issafe(int x, int y){
    if(x<0 || x>=N || y<0 || y>=N)
    return false;
    return true;
}

void print(vector<Node> b) {

    for(Node x: b){
        cout<<x.first<<" "<<x.second<<endl;
    }

}
