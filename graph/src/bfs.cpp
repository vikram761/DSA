#include <queue>
#include <vector>
#include "headers/graph.h"

using namespace std;

vector<int> Graph::breath_first_search(int initial_node){
  vector<int> vis(n,0);
  vis[initial_node] = 1;
  vector<int> v;
  queue<int> q;
  q.push(initial_node);

  while(!q.empty()){
    int node = q.front();
    q.pop();
    v.push_back(node);
    for(auto i : adj[node]){
      if(!vis[i]){
        vis[i] = 1;
        q.push(i);
      }
    }
  }
  return v;
}
