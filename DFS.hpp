#include <iostream>
#include <vector>

using namespace std;

void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s){
  
    visited[s] = true;

    cout << s << " ";

    for (int i : adj[s]){
        if (visited[i] == false){
            DFSRec(adj, visited, i);
        }
    }
}
void DFS(vector<vector<int>> &adj, int s){
    vector<bool> visited(adj.size(), false);
    DFSRec(adj, visited, s);
}