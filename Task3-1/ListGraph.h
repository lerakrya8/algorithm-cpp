//
// Created by lerakrya on 19.12.2020.
//

#ifndef TASK3_1_LISTGRAPH_H
#define TASK3_1_LISTGRAPH_H

#include "IGraph.h"

class ListGraph : public IGraph {
public:
    ListGraph(const IGraph& igraph);
    ListGraph(int n);

    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::vector<int>> list_graph;
};

#endif //TASK3_1_LISTGRAPH_H
