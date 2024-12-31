#include<iostream>
#include <queue>
#include <vector>

using namespace std;
void BFS(vector<vector<int>>& adj, int s){
    int n = adj.size();
    vector<bool> visited(n, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int v : adj[curr]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}