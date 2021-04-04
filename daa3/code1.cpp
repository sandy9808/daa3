#include <iostream>
#include<list>
#include<queue>
using namespace std;

class Graph {
private:
	int V;
	//list of nbrs
	list <int>* l;
public:
	Graph(int V) {
		this->V = V;
		l = new list <int>[V];
	}
	void addEdge(int x, int y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void bfs(int src) {
		queue<int> q;
		vector <int> dist(V, INT_MAX);
		q.push(src);
		dist[src] = 0;
		while (!q.empty()) {
			int parent = q.front();
			q.pop();
			for (auto nbr : l[parent]) {
				if (dist[nbr] == INT_MAX) {
					q.push(nbr);
					dist[nbr] = 1 + dist[parent];
				}
			}
		}
		for (int i = 0; i < V; i++)
			printf("SSSP(%d, %d) = %d\n", src, i, dist[i]);
	}

};

int main() {
	int v,e;
	cin >> v >> e;
	Graph G(v);
	while (e--) {
		int x, y;
		cin >> x >> y;
		G.addEdge(x, y);
	}
	G.bfs(0);
}
/*
Sample input is
13 16
0 1
1 2
2 3
0 4 
1 5
2 6
3 7
5 6
4 8
8 9
5 10
6 11
7 12
9 10 
10 11
11 12

Output is :
SSSP(0, 0) = 0
SSSP(0, 1) = 1
SSSP(0, 2) = 2
SSSP(0, 3) = 3
SSSP(0, 4) = 1
SSSP(0, 5) = 2
SSSP(0, 6) = 3
SSSP(0, 7) = 4
SSSP(0, 8) = 2
SSSP(0, 9) = 3
SSSP(0, 10) = 3
SSSP(0, 11) = 4
SSSP(0, 12) = 5

*/