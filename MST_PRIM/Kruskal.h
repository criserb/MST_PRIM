#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class KruskalGraph {
private:
	vector<pair<int, pair<int, int>>> G; // graph
	vector<pair<int, pair<int, int>>> T; // mst
	int *parent;
	int V; // number of vertices/nodes in graph
public:
	KruskalGraph(int V);
	void addEdge(int u, int v, int w);
	int find_set(int i);
	void union_set(int u, int v);
	void kruskal();
	void print();
};

