//
// Created by lerakrya on 19.12.2020.
//

#ifndef TASK3_1_ARCGRAPH_H
#define TASK3_1_ARCGRAPH_H

#include "IGraph.h"
#include <vector>

class ArcGraph : public IGraph {
public:
    ArcGraph(const IGraph& igraph);
    ArcGraph(int n);
    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;
private:
    std::vector<std::pair<int, int>> arc_graph;
};

#endif //TASK3_1_ARCGRAPH_H
