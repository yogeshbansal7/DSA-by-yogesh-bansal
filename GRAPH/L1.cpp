#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:

    unordered_map<int , list<int> > adj;

    void addedge(int u , int v , bool direction){
        // if direction is 0 it means graph is undirected
        // if direction is 1 it means graph is directed

        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void print(){
        for (auto i: adj){
            cout<<i.first <<" -> ";
            for(auto j : i.second){
                cout<<j<< ", ";
            }
            cout<<endl;
        }
    }
};

int main(){

    int n,m;
    cin>>n>>m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g.addedge(u,v,0);
    }

    g.print();


    return 0;
}