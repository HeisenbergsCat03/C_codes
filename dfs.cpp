#include <iostream>
#include <list>
#include <vector>
#include <stack>
using namespace std;

class Graph {
    int numVertices;
    list<int> *adjLists;
    bool *visited;
public:
    Graph(int V);
    void addEdge(int src, int dest);
    void DFS(int vertex);
};

Graph::Graph(int vertices) {
    numVertices = vertices;
    adjLists = new list<int>[vertices];
    visited = new bool[vertices];
}

void Graph::addEdge(int src, int dest) {
    adjLists[src].push_front(dest);
}

void Graph::DFS(int s){
    vector<bool> visited(numVertices,false);
    stack<int> st;
    st.push(s);
    while(!st.empty()){
        int t =  st.top();
        st.pop();
        if(!visited[t]){
            cout<<t<<endl;
            visited[t] = true;
        }
        for (typename list<int>::iterator i = adjLists[t].begin(); i != adjLists[t].end(); ++i)
            if (!visited[*i])
                st.push(*i);
    }
}

int main(){
    Graph g(5); // Total 5 vertices in graph
        g.addEdge(1, 0);
        g.addEdge(0, 2);
        g.addEdge(2, 1);
        g.addEdge(0, 3);
        g.addEdge(1, 4);
 
    cout << "Following is Depth First Traversal\n";
    g.DFS(0);

    return 0;
}
