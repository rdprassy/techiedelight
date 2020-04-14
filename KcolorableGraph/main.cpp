#include <iostream>
#include<vector>
#include <iomanip>

using namespace std;

struct Edge{
    int src;
    int dest;
};



class Graph{
public:
    vector<vector<int>> adjList;

    Graph(vector<Edge> const &edges,int N){
        adjList.resize(N);


        for(int i=0;i<edges.size();i++){
            int s = edges[i].src;
            int d = edges[i].dest;

            adjList[s].push_back(d);
            adjList[d].push_back(s);
        }
    }
};

string colors[]={"","RED","BLUE","GREEN","YELLOW","PINK","BLACK"};

bool issafe(Graph const&graph, vector<int> color,int start, int c) {

    for(int j: graph.adjList[start])
        {
            if(color[j]==c){
                return false;
            }
        }


    return true;
}

void kpaths(Graph const& g, vector<int> &color, int start, int k,int N) {

    if(start == N){
//        print(color);

        for(int start=0;start<N;start++)
            cout<<setw(8)<<left<<colors[color[start]];
        cout<<endl;
        return;
    }


    for(int i=1;i<=k;i++){

        if(issafe(g,color,start,i)){
            color[start] =i;
            kpaths(g,color,start+1,k,N);
            color[start] =0;
        }

    }


}



int main() {
//    std::cout << "Hello, World!" << std::endl;

    int k = 3;

    vector<Edge> edges={
            {0,1},{0,4},{0,5},{4,5},{1,4},{1,3},{2,3},{2,4}
    };

    int N = 6;
    vector<int> color(N,0);

    Graph g(edges,N);
    kpaths(g,color,0,k,N);

    return 0;
}




