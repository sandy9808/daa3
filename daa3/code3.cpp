#include <algorithm>
#include <cstdio>
#include <vector>
#include<iostream>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main() {
    int V, E, s, u, v, w;
    vector<vii> AdjList;

    cin >> V >> E >> s;

    AdjList.assign(V, vii()); // assign blank vectors of pair<int, int>s to AdjList
    for (int i = 0; i < E; i++) {
        cin >> u >> v >> w;
        AdjList[u].push_back(ii(v, w));
    }

    // Bellman Ford routine
    vi dist(V, INF); dist[s] = 0;
    for (int i = 0; i < V - 1; i++)  // relax all E edges V-1 times, overall O(VE)
        for (int u = 0; u < V; u++)                        // these two loops = O(E)
            for (int j = 0; j < (int)AdjList[u].size(); j++) {
                ii v = AdjList[u][j];        // we can record SP spanning here if needed
                dist[v.first] = min(dist[v.first], dist[u] + v.second);         // relax
            }

    for (int i = 0; i < V; i++)
        printf("SSSP(%d, %d) = %d\n", s, i, dist[i]);

    return 0;
}

/*
// Sample input
5 5 0
0 1 1
0 2 10
1 3 2
2 3 -10
3 4 3

Output is:
SSSP(0, 0) = 0
SSSP(0, 1) = 1
SSSP(0, 2) = 10
SSSP(0, 3) = 0
SSSP(0, 4) = 3
*/