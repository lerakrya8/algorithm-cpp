#include "MatrixGraph.h"

MatrixGraph::MatrixGraph(const IGraph& igraph) {
    for (size_t i = 0; i < igraph.VerticesCount(); ++i) {
        std::vector<int> children = igraph.GetNextVertices(i);
        for (size_t j = 0; j < children.size(); ++j) {
            matrix[i][children[j]] = true;
        }
    }
}

MatrixGraph::MatrixGraph(int n) {
    matrix.resize(n);
    for(auto& v : matrix) {
        v.resize(n);
    }
}

void MatrixGraph::AddEdge(int from, int to) {
    matrix[from][to] = true;
}

int MatrixGraph::VerticesCount() const {
    return matrix.size();
}

std::vector<int> MatrixGraph::GetNextVertices(int vertex) const {
    std::vector<int> result;
    for(size_t i = 0; i < matrix.size(); ++i) {
        if (matrix[vertex][i] == true) {
            result.push_back(i);
        }
    }
    return result;
}

std::vector<int> MatrixGraph::GetPrevVertices(int vertex) const {
    std::vector<int> result;
    for (size_t i = 0; i < matrix.size(); ++i) {
        if (matrix[i][vertex] == true) {
            result.push_back(i);
        }
    }
    return result;
}
