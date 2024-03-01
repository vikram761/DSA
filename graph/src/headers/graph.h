#pragma once

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {

public:

  int n;
  vector<vector<int>> adj;

  Graph(int val) {
    n = val;
    adj = vector<vector<int>>(n , vector<int>(0));
  }

  void addEdge(int start, int end) {
    adj[start].push_back(end);
    adj[end].push_back(start);
  }

  void displayEdges() {
    for (int i = 0; i < n; i++) {
      cout << i << " : ";
      for (auto j : adj[i]) {
        cout << j << " ";
      }
      cout << endl;
    }
  }
  vector<int> breath_first_search(int initial_node);
  vector<int> depth_first_search(int initial_node);
  bool detectCycle();
};
