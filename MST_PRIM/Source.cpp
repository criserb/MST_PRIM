// STL implementation of Prim's algorithm for MST
#include "Prim.h"
#include "Kruskal.h"

// Driver program to test methods of graph class
int main()
{
	// create the graph given in above fugure
	int V = 5;
	PrimGraph g1(V);
	KruskalGraph g2(V);

	//  making above shown graph
	g1.addEdge(0, 1, 1);
	g1.addEdge(0, 2, 2);
	g1.addEdge(0, 3, 2);
	g1.addEdge(0, 4, 6);
	g1.addEdge(1, 3, 4);
	g1.addEdge(1, 4, 5);
	g1.addEdge(2, 3, 3);
	g1.addEdge(3, 4, 3);
	g1.primMST();

	g2.addEdge(0, 1, 1);
	g2.addEdge(0, 2, 2);
	g2.addEdge(0, 3, 2);
	g2.addEdge(0, 4, 6);
	g2.addEdge(1, 3, 4);
	g2.addEdge(1, 4, 5);
	g2.addEdge(2, 3, 3);
	g2.addEdge(3, 4, 3);

	g2.kruskal();
	g2.print();
	system("pause");

	return 0;
}