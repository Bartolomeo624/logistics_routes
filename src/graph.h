//
// Created by bartolomeo on 01.02.23.
//
#include <list>
#include <vector>
#include "node.h"

using namespace std;

#ifndef SPEDITION_COMPANY_GRAPH_H
#define SPEDITION_COMPANY_GRAPH_H


class Graph {
public:
    int size;
    list<node> *neighborList;

public:
    Graph(int size);
    void addEdge(int nodeId1, int nodeId2, int weight);
    void addEdges(vector<vector<int>> edges);
};


#endif //SPEDITION_COMPANY_GRAPH_H
