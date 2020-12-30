//
// Created by lerakrya on 19.12.2020.
//

#ifndef TASK3_1_SETGRAPH_H
#define TASK3_1_SETGRAPH_H

#include "IGraph.h";
#include <set>

class SetGraph : public IGraph {
public:
    SetGraph(const IGraph& igraph);
    SetGraph(int n);

    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;
private:
    std::vector<std::set<int>> set_graph;
};

#endif //TASK3_1_SETGRAPH_H
