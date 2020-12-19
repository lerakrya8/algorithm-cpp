
#include "ListGraph.h"

ListGraph::ListGraph(int n) {
    list_graph.resize(n);
}

void ListGraph::AddEdge(int from, int to) {
    list_graph[from].push_back(to);
}

int ListGraph::VerticesCount() const {
    list_graph.size();
}

std::vector<int> ListGraph::GetNextVertices(int vertex) const {
    std::vector<int> result(list_graph[vertex].begin(), list_graph[vertex].end());
    return result;
}

std::vector<int> ListGraph::GetPrevVertices(int vertex) const {
    std::vector<int> result;
    for (size_t i = 0; i < list_graph.size(); ++i) {
        for (auto& v : list_graph[i]) {
            if (v == vertex) {
                result.push_back(i);
            }
        }
    }
    return result;
}



