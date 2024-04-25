#include <iostream>

#include "Graph/Graph.h"
#include "Algorithms/Algorithms.h"

using namespace std;

int main() {
    Graph g = Graph(5);

    /*g.setEdgeDistance(0, 1, 10.0, 1);
    g.setEdgeDistance(0, 2, 50, 0);
    g.setEdgeDistance(1, 2, 30, 1);
    g.setEdgeDistance(3, 1, 40, 0);
    g.setEdgeDistance(3, 2, 24, 1);
    g.printDebug();*/


    //GRAFO DO TURISMO DO PORTOOOO//
    std::vector<Vertex*> vertexSet;

    Vertex v0(0, "", 0, 0);
    Vertex v1(1, "", 0, 0);
    Vertex v2(2, "", 0, 0);
    Vertex v3(3, "", 0, 0);
    Vertex v4(4, "", 0, 0);

    vertexSet.push_back(&v0);
    vertexSet.push_back(&v1);
    vertexSet.push_back(&v2);
    vertexSet.push_back(&v3);
    vertexSet.push_back(&v4);

    g.setVertexSet(vertexSet);

    g.setEdgeDistance(0, 1, 1300, 1);
    g.setEdgeDistance(0, 2, 1000, 1);
    g.setEdgeDistance(0, 3, 450, 1);
    g.setEdgeDistance(0, 4, 750, 1);

    g.setEdgeDistance(1, 2, 450, 1);
    g.setEdgeDistance(1, 3, 950, 1);
    g.setEdgeDistance(1, 4, 450, 1);

    g.setEdgeDistance(2, 3, 500, 1);
    g.setEdgeDistance(2, 4, 600, 1);

    g.setEdgeDistance(3, 4, 750, 1);

    cout << "O custo mínimo é: " << Algorithms::TSPwithBacktracking(&g) << endl;

    return 0;
}
