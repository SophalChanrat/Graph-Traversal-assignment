#include "BFS.hpp"
#include "DFS.hpp"
#include <iostream>

void addEdge(vector<vector<int>> &adj, int s, int t){
    adj[s].push_back(t); 
    adj[t].push_back(s); 
}

int main(){
    int V = 7;
    vector<vector<int>> adj(V);
  
    // Add edges
    vector<vector<int>> edges={{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {3,5}};
    for (auto &e : edges){
        addEdge(adj, e[0], e[1]);
    }
    int s = 0;
    cout<<"BFS: ";
    BFS(adj, s);
    cout<<endl;
    cout<<"DFS: ";
    DFS(adj, s);
}