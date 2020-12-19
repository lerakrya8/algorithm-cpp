
#include "ArcGraph.h"


ArcGraph::ArcGraph(int n) {
    arc_graph.reserve(n);
}
void ArcGraph::AddEdge(int from, int to) {
    arc_graph.push_back({from, to});
}

int ArcGraph::VerticesCount() const {
    return arc_graph.size();
}

std::vector<int> ArcGraph::GetNextVertices(int vertex) const {
    std::vector<int> result;
    for(auto& v : arc_graph) {
        if (v.first == vertex) {
            result.push_back(v.second);
        }
    }
    return result;
}

std::vector<int> ArcGraph::GetPrevVertices(int vertex) const {
    std::vector<int> result;
    for(auto& v : arc_graph) {
        if (v.second == vertex) {
            result.push_back(v.first);
        }
    }
    return result;
}
