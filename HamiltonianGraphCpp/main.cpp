#include <iostream>
#include <vector>
#include<cstring>

using namespace std;

struct Edge{
    int a;
    int b;
};

class Graph{

public:

    vector<vector<int>> adjList;


    Graph(vector<Edge> const &edges, int N){
        adjList.resize(N);

        for(int i=0; i< edges.size(); i++){

            adjList[edges[i].a].push_back(edges[i].b);
            adjList[edges[i].b].push_back(edges[i].a);
        }

    }


};


void Hamiltonian(Graph const& graph, vector<int> &path, vector<bool> visited, int N, int start);

int main() {
  //  std::cout << "Hello, World!" << std::endl;

    vector<Edge> edges = {{0, 1}, {0, 2}, {0, 3}, {1, 2}, {1, 3}, {2, 3}};
    int N = 4;
    Graph g(edges,N);

    //Now lets make path
    vector<int> path;
    vector<bool> visited(N);

    path.push_back(0);

    visited[0] = true;




    Hamiltonian(g,path,visited,N,0);
    return 0;
}

void Hamiltonian(Graph const& graph, vector<int> &path, vector<bool> visited, int N, int start) {

if(path.size() == N){
    for(int i=0;i<N;i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

vector<int> t = graph.adjList[start];

for(int k:t){

    if(!visited[k]){
        visited[k]=true;
        path.push_back(k);
        Hamiltonian(graph,path,visited,N,k);
        visited[k]=false;
        path.pop_back();

    }

}



}
