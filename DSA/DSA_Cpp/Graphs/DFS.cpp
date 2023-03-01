#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        map<int,list<int > >adj;

        void addEdge(int u, int v, bool direction){
            adj[u].push_back(v);

            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printGraph(){
            for(auto i : adj){
                cout<<i.first<<" -> ";
                for(auto k : i.second){
                    cout<<k<<" , ";
                }cout<<endl;
            }
        }

        void DFSTraversal(int start,int visited[]){
            visited[start] = 1;
            cout<<start<<" ";
            for(auto i : adj[start]){
                if(visited[i] == 0){
                    DFSTraversal(i,visited);
                }
            }
        }
};
// 8
// 1 2
// 1 3
// 2 5
// 2 6
// 3 7
// 3 4
// 7 8
// 4 8
int main(){
    // GRAPH CREATION CODE
    int n;
    cout<<"Enter the number of vertices in the graph"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges in the graph"<<endl;
    cin>>m;

    Graph g; 

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        //creating a unidirected graph
        g.addEdge(u,v,0);
    }
    g.printGraph();

    // DFS TRAVERSAL CALL
    int startNode;
    cout<<"Enter a starting node"<<endl;
    cin>>startNode;
    int visited[n+1];
    fill_n(visited,n+1,0);
    g.DFSTraversal(startNode,visited);
    cout<<endl;
    return 0;
}