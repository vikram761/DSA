#include "headers/graph.h"

bool dfs(const vector<vector<int>> adj, vector<int> &vis, int node, int prev) {
  vis[node] = 1;
  for (auto it : adj[node]) {
    if (!vis[it]) {
      if (dfs(adj, vis, it, node) == true) {
        return true;
      }
    } else if (it != prev) {
      return true;
    }
  }
  return false;
}

bool bfs(const vector<vector<int>> adj, vector<int> &vis, int node) {
  queue<pair<int, int>> q;
  q.push({node, -1});
  vis[node] = 1;
  while (!q.empty()) {
    int node = q.front().first;
    int prev = q.front().second;
    q.pop();
    for (auto it : adj[node]) {
      if (!vis[it]) {
        vis[it] = 1;
        q.push({it, node});
      } else if (it != prev) {
        return true;
      }
    }
  }
  return false;
}

bool Graph::detectCycle() {
  vector<int> vis(n, 0);
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      if (dfs(adj, vis, i, -1) == true) {
        return true;
      }
    };
  }
  return false;
}
