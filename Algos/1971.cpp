#include <string>
#include <algorithm> 
#include <iostream>
#include <vector>
using namespace std;

void dfs(int v, vector<int> E[], vector<bool>& used){
    used[v] = true;
    for(auto to : E[v]){
        if(used[to] == false){
            dfs(to, E, used);
        }
    }
}


bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> E[n];
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            E[u].push_back(v);
            E[v].push_back(u);
        }
        vector<bool> used(n);
        dfs(source, E, used);
        return used[destination];
}



int main(){
    int n = 6;
    // vector<vector<int>> edges = {{0,1},{1,2},{2,0}};
    // cout << validPath(n, edges, 0, 2);
    vector<vector<int>> edges1 = {{0,1},{0,2},{3,5},{5,4},{4,3}};
    cout << validPath(n, edges1, 0, 5);
}