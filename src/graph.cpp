//
// Created by bartolomeo on 01.02.23.
//

#include "graph.h"


Graph::Graph(int size) {
    this->size = size;
    neighborList = new std::list<node>[size];
}

void Graph::addEdge(int nodeId1, int nodeId2, int weight) {
    /**
     * Add a single edge to the graph. NodeId1
     *
     * @param nodeId1 the first node. The parameter's value should be less than size of the Graph.
     * @param nodeId2 the second node. The parameter's value should be less than size of the Graph and different to
     *                nodeId1.
     * @param weight The weight of the edge. Must not be negative.
     */
    if (nodeId1 != nodeId2 && 0 <= nodeId1 < this->size && 0 <= nodeId2 < this->size && weight >= 0) {
        node addedNode;
        addedNode.weight = weight;
        // undirected graph requires adding edges both ways
        addedNode.nodeId = nodeId2;
        neighborList[nodeId1].push_back(addedNode); // add edge from node1 to node2
        addedNode.nodeId = nodeId1;
        neighborList[nodeId2].push_back(addedNode); // add edge from node2 to node1
    }
}

void Graph::addEdges(std::vector<std::vector<int>> edges) {
    /**
     * Add many edges to the graph using a single entry.
     *
     * @param edges vector of vectors shaped (n, 3) where n is a number of edges and each vector has three integers
     * where the first one represents the first node, the second one - the second node and the third is the weight
     */
    for (std::vector<int> edge: edges) {
        this->addEdge(edge[0], edge[1], edge[2]);
    }
}
