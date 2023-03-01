#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

template <typename T >

class Graph{
    public:
        unordered_map<T,list<T> >adj;

        void addEdge(T u, T v, bool direction){
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
};

int main(){
    int n;
    cout<<"Enter the number of vertices in the graph"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges in the graph"<<endl;
    cin>>m;

    Graph <char> g; 

    for(int i=0;i<m;i++){
        char u,v;
        cin>>u>>v;

        //creating a unidirected graph
        g.addEdge(u,v,0);
    }
    g.printGraph();
    return 0;
}