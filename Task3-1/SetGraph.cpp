
#include "SetGraph.h"

SetGraph::SetGraph(int n) {
    set_graph.resize(n);
}

void SetGraph::AddEdge(int from, int to) {
    set_graph[from].insert(to);
}

int SetGraph::VerticesCount() const {
    return set_graph.size();
}

std::vector<int> SetGraph::GetNextVertices(int vertex) const {
    std::vector<int> result(set_graph.size());
    std::copy(set_graph[vertex].begin(), set_graph[vertex].end(), result.begin());
    return result;
}

std::vector<int> SetGraph::GetPrevVertices(int vertex) const {
    std::vector<int> result;
    for(size_t i = 0; i < set_graph.size(); ++i) {
        if(set_graph[i].count(vertex) != 0) {
            result.push_back(i);
        }
    }
    return result;
}
