#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
  
    void dfsOnGraph(int node, vector<vector<int>> &adj, vector<bool>& visited, vector<int> &ans){
        
        visited[node] = 1;
        ans.push_back(node);
        
        for(int j = 0; j < adj[node].size(); j++){
            if(!visited[adj[node][j]]){
                dfsOnGraph(adj[node][j], adj, visited, ans);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, 0);
        vector<int> ans;
        
        dfsOnGraph(0, adj, visited, ans);
        return ans;
    }
};

int main() {
    int V, E;
    
    // Input number of vertices
    cout << "Enter number of vertices: ";
    cin >> V;
    
    // Create adjacency list
    vector<vector<int>> adj(V);
    
    // Input number of edges
    cout << "Enter number of edges: ";
    cin >> E;
    
    cout << "Enter edges (format: u v) where u -> v:" << endl;
    
    // Input edges
    for(int i = 0; i < E; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        // If undirected graph, uncomment the line below:
        // adj[v].push_back(u);
    }
    
    // Display the adjacency list
    cout << "\nAdjacency List:" << endl;
    for(int i = 0; i < V; i++){
        cout << i << " -> ";
        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    // Perform DFS
    Solution solution;
    vector<int> result = solution.dfs(adj);
    
    // Display DFS traversal
    cout << "\nDFS Traversal starting from node 0:" << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i];
        if(i < result.size() - 1) cout << " -> ";
    }
    cout << endl;
    
    return 0;
}