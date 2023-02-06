#include <string>
#include <vector>
#include <iostream>
#include "graph.h"
#include "args_parser.h"
#include "strings.h"
using namespace std;


int index_of_min(const list<int>& members, const int *values) {
    int min = INT32_MAX;
    int index = -1;

    for (int member: members) {
        if(values[member] < min) {
            index = member;
            min = values[member];
        }
    }
    return index;
}

void calculate_shortest_paths(Graph graph, int source, int *previous, int *distance) {
    /**
     * Executes Dijkstra algorithm on the given Graph object for the specified source node. Calculates the shortest
     * distances to each node and makes it possible to deduce the shortest paths by updating the info of previous nodes.
     *
     * @param graph Graph instance with initialized edges.
     * @param source Id of the node for which the shortest paths are calculated
     * @param previous array of previous nodes belonging to the shortest path of each node.
     * Initialized array of size = graph.size should be passed.
     * @param distance array of the shortest distances to each node from the source node. Initialized array
     * of size = graph.size should be passed.
     */

    // initialize 'distance' array with max integers and 'previous' array with special values -1 (indicates no previous)
    for (int q = 0; q < graph.size; ++q) {
        distance[q] = INT32_MAX;
        previous[q] = -1;
    }

    // Distance to the source is always zero.
    distance[source] = 0;

    // initialize remaining with all the nodes
    list<int> remaining;
    for (int q = 0; q < graph.size; ++q) {
        remaining.push_back(q);
    }

    // actual algorithm
    while (!remaining.empty()) {
        // pick the node id from 'remaining' that has the smallest value in 'distance' array
        int min_element = index_of_min(remaining, distance);
        // remove that node from 'remaining'
        remaining.remove(min_element);
        // iterate over the neighbor list of the picked node
        list<node> :: iterator i;
        for(i = graph.neighborList[min_element].begin(); i != graph.neighborList[min_element].end(); i++) {
            // for each neighbor update the shortest distance and previous node if the condition is true
            if (distance[min_element] + (i->weight) < distance[i->nodeId]) {
                distance[i->nodeId] = distance[min_element] + (i->weight);
                previous[i->nodeId] = min_element;
            }
        }
    }
}

int main(int argc, char** argv) {
    ArgsParser argsParser(argc, argv);
    InputParser inputParser();

    bool isInputCorrect = true;

    if (argsParser.argExists("-h")){cout << HELP_TEXT;}
    if (argsParser.argExists("-i")){
        const std::string &filename = argsParser.getArg("-i");

    } else {
        cout << MISSING_I;
        isInputCorrect = false;
    }
    if (argsParser.argExists("-o")){
        // output file
    } else {
        cout << MISSING_O;
        isInputCorrect = false;
    }
    if (argsParser.argExists("-c")){
        // file with central node
    } else {
        cout << MISSING_C;
        isInputCorrect = false;
    }

    if (!isInputCorrect) {
        // input is incorrect - finish the program.
        return 1;
    }




}




