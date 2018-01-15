#pragma once

#include <list>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

class Graph
{
	int V;    // No. of vertices

			  // In a weighted graph, we need to store vertex
			  // and weight pair for every edge
	list< pair<int, int> > *adj;

public:
	Graph(int V);  // Constructor

				   // function to add an edge to graph
	void addEdge(int u, int v, int w);

	// Print MST using Prim's algorithm
	void primMST();
};

