//
// Created by lerakrya on 19.12.2020.
//

#ifndef TASK3_1_MATRIXGRAPH_H
#define TASK3_1_MATRIXGRAPH_H

#include "IGraph.h"

class MatrixGraph : public IGraph {
public:
    MatrixGraph(int n);

    void AddEdge(int from, int to) override;

    int VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;
    std::vector<int> GetPrevVertices(int vertex) const override;

private:
    std::vector<std::vector<bool>> matrix;
};

#endif //TASK3_1_MATRIXGRAPH_H
