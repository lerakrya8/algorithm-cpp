//
// Created by lerakrya on 19.12.2020.
//
#include "MatrixGraph.h"
#include "ListGraph.h"
#include "SetGraph.h"
#include "ArcGraph.h"
#include <queue>
#include <iostream>

void dfs_aux(const IGraph& graph, int vertex, std::vector<bool>& visited, void (*callback)(int v)) {
    visited[vertex] = true;
    callback(vertex);

    for (auto child : graph.GetNextVertices(vertex)) {
        if (!visited[child]) {
            dfs_aux(graph, child, visited, callback);
        }
    }
}

void dfs(const IGraph& graph, void (*callback)(int v)) {
    std::vector<bool> visited;
    visited.resize(graph.VerticesCount(), false);

    for (int i = 0; i < graph.VerticesCount(); ++i) {
        if (!visited[i]) {
            dfs_aux(graph, i, visited, callback);
        }
    }
}

void bfs(const IGraph& graph, void (*callback)(int v)) {
    std::vector<bool> visited;
    std::queue<int> queue;
    visited.resize(graph.VerticesCount(), false);
    for (int i = 0; i < graph.VerticesCount(); ++i) {
        if (!visited[i]) {
            queue.push(i);
            visited[i] = true;
            while (!queue.empty()) {
                int vertex = queue.front();
                queue.pop();
                callback(vertex);
                for (auto child : graph.GetNextVertices(vertex)) {
                    if (!visited[child]) {
                        queue.push(child);
                        visited[child] = true;
                    }
                }
            }
        }
    }

}

int main() {
    MatrixGraph matrix_graph(6);
    ListGraph list_graph(6);
    SetGraph set_graph(6);
    ArcGraph arc_graph(6);

    matrix_graph.AddEdge(0, 1);
    matrix_graph.AddEdge(1, 2);
    matrix_graph.AddEdge(1, 5);
    matrix_graph.AddEdge(2, 3);
    matrix_graph.AddEdge(3, 4);
    matrix_graph.AddEdge(4, 2);

    list_graph.AddEdge(0, 1);
    list_graph.AddEdge(1, 2);
    list_graph.AddEdge(1, 5);
    list_graph.AddEdge(2, 3);
    list_graph.AddEdge(3, 4);
    list_graph.AddEdge(4, 2);

    set_graph.AddEdge(0, 1);
    set_graph.AddEdge(1, 2);
    set_graph.AddEdge(1, 5);
    set_graph.AddEdge(2, 3);
    set_graph.AddEdge(3, 4);
    set_graph.AddEdge(4, 2);

    arc_graph.AddEdge(0, 1);
    arc_graph.AddEdge(1, 2);
    arc_graph.AddEdge(1, 5);
    arc_graph.AddEdge(2, 3);
    arc_graph.AddEdge(3, 4);
    arc_graph.AddEdge(4, 2);

    std::cout << "MatrixGraph: " << std::endl;
    dfs(matrix_graph, [](int v) {
        std::cout << v << " ";
    });
    std::cout << std::endl << "-----------" << std::endl;
    bfs(matrix_graph, [](int v) {
        std::cout << v << " ";
    });

    std::cout << std::endl<< "ListGraph: " << std::endl;
    dfs(list_graph, [](int v) {
        std::cout << v << " ";
    });
    std::cout << std::endl << "-----------" << std::endl;
    bfs(list_graph, [](int v) {
        std::cout << v << " ";
    });

    std::cout << std::endl << "SetGraph: " << std::endl;
    dfs(set_graph, [](int v) {
        std::cout << v << " ";
    });
    std::cout << std::endl << "-----------" << std::endl;
    bfs(set_graph, [](int v) {
        std::cout << v << " ";
    });

    std::cout << std::endl << "ArcGraph: " << std::endl;
    dfs(arc_graph, [](int v) {
        std::cout << v << " ";
    });

    std::cout << std::endl << "-----------" << std::endl;
    bfs(arc_graph, [](int v) {
        std::cout << v << " ";
    });

    return 0;
}


