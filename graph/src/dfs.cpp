#include "headers/graph.h"

#include <vector>

void helper(int node,vector<int> &vis,vector<int> &ans,const vector<vector<int>>adj){
  vis[node] =1;
  ans.push_back(node);
  for(auto it : adj[node]){
    if(!vis[it]){
      helper(it,vis,ans,adj);
    }
  }
}

vector<int> Graph::depth_first_search(int initial_node){
  vector<int> vis(n,0);
  vector<int> ans;
  helper(initial_node,vis,ans,adj);
  return ans;
}

