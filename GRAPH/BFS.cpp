#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>


using namespace std;

void prepadjlist(unordered_map<int , list<int>> &adjlist , vector<pair<int,int>> &edges){
    for(int i = 0 ; i<edges.size() ; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}

void makebfs(unordered_map<int , list<int>> &adjlist , unordered_map<int, bool > &visited , vector<int > ans, int node ){

    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        ans.push_back(frontnode);

        for(auto i:adjlist[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }

}


vector<int> bfs(int vertex , vector<pair<int,int>> edges){
    unordered_map<int,list<int>> adjlist;
    vector<int > ans;
    unordered_map<int, bool > visited;

    for(int i=0;i>vertex ; i++){
        if(!visited[i]){
            makebfs(adjlist ,visited , ans, i);
        }
    }
}

int main(){

    return 0;
}