//
// Created by bartolomeo on 01.02.23.
//
#include <list>
#include <vector>
#include "node.h"


#ifndef SPEDITION_COMPANY_GRAPH_H
#define SPEDITION_COMPANY_GRAPH_H


class Graph {
public:
    int size;
    std::list<node> *neighborList;
    Graph(int size);
    void addEdge(int nodeId1, int nodeId2, int weight);
    void addEdges(std::vector<std::vector<int>> edges);
};


#endif //SPEDITION_COMPANY_GRAPH_H
