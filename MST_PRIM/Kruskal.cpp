#include "Kruskal.h"

KruskalGraph::KruskalGraph(int V) {
	parent = new int[V];

	//i 0 1 2 3 4 5
	//parent[i] 0 1 2 3 4 5
	for (int i = 0; i < V; i++)
		parent[i] = i;

	G.clear();
	T.clear();
}
void KruskalGraph::addEdge(int u, int v, int w) {
	G.push_back(make_pair(w, pair<int, int>(u, v)));
}
int KruskalGraph::find_set(int i) {
	// If i is the parent of itself
	if (i == parent[i])
		return i;
	else
		// Else if i is not the parent of itself
		// Then i is not the representative of his set,
		// so we recursively call Find on its parent
		return find_set(parent[i]);
}

void KruskalGraph::union_set(int u, int v) {
	parent[u] = parent[v];
}
void KruskalGraph::kruskal() {
	int i, uRep, vRep;
	sort(G.begin(), G.end()); // increasing weight
	for (i = 0; i < G.size(); i++) {
		uRep = find_set(G[i].second.first);
		vRep = find_set(G[i].second.second);
		if (uRep != vRep) {
			T.push_back(G[i]); // add to tree
			union_set(uRep, vRep);
		}
	}
}
void KruskalGraph::print() {
	cout << "Edge :" << " Weight" << endl;
	for (int i = 0; i < T.size(); i++) {
		cout << T[i].second.first << " - " << T[i].second.second << " : "
			<< T[i].first;
		cout << endl;
	}
}