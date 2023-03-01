#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

// GRAPH CREATION CODE
class Graph{
    public:
        unordered_map<int,list<int> >adj;

        void addEdge(int u, int v, bool direction){
            // direction == 0 -> undirected graph
            // direction == 1 -> directed graph

            //creating the edge
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

        void BFSTraversal(int start, int n){
            int visited[n+1];
            fill_n(visited,n+1,0); 
            queue<int>q;
            q.push(start);
            visited[start] = 1;
            while(!q.empty()){
                int temp = q.front();
                q.pop();
                cout<<temp<<" ";
                //i -> each element of list corresponding to that vertex
                for(auto i : adj[temp]){
                    if(visited[i]==0){
                        q.push(i);
                        visited[i] = 1;
                    }
                }
            }cout<<endl;

        }
};
// 1 2
// 1 6
// 2 3
// 2 4
// 6 7
// 6 9
// 4 5
// 7 8
// 5 8

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

    // BFS TRAVERSAL CALL
    int startNode;
    cout<<"Enter a starting node"<<endl;
    cin>>startNode;
    g.BFSTraversal(startNode,n);
    return 0;
}