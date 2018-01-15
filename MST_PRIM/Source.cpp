// STL implementation of Prim's algorithm for MST
#include "Graph.h"

// Driver program to test methods of graph class
int main()
{
	// create the graph given in above fugure
	int V = 5;
	Graph g(V);

	//  making above shown graph
	g.addEdge(0, 1, 1);
	g.addEdge(0, 2, 2);
	g.addEdge(0, 3, 2);
	g.addEdge(0, 4, 6);
	g.addEdge(1, 3, 4);
	g.addEdge(1, 4, 5);
	g.addEdge(2, 3, 3);
	g.addEdge(3, 4, 3);
	
	g.primMST();

	system("pause");

	return 0;
}