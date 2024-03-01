#include "headers/graph.h"

using namespace std;

int main(){
  Graph a = Graph(4);
  a.addEdge(0,1);
  a.addEdge(1,3);
  a.addEdge(1,2);
  a.addEdge(2,0);
  a.displayEdges();
  cout<<"cylce : "<<a.detectCycle()<<endl;
}
