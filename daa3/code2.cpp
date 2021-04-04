#include<bits/stdc++.h>
using namespace std;
void shortestDistance(int s, bool visited[],vector<pair<int,int>>vec[],int distance[])
{   
    visited[s]=true;
    distance[s]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
    p.push({0,s});
    while(!p.empty())
    { 
        pair<int,int> t=p.top();
        p.pop();
        visited[t.second]=true;
        for(int i=0;i<vec[t.second].size();i++)
        {   
            if((!visited[vec[t.second][i].first])&& (t.first+vec[t.second][i].second<distance[vec[t.second][i].first]))
            {   
                distance[vec[t.second][i].first]=t.first+vec[t.second][i].second;
                p.push({distance[vec[t.second][i].first],vec[t.second][i].first});
            }
        }
    }
    return;
}
int main()
{
    int nodes,edges,s;
    cin >> nodes >> edges>> s;
    vector<pair<int,int>> vec[nodes+1];
    int i,a,b,dis;
    for(i=0;i<edges;i++)
    {
        cin >> a >> b >> dis;
        vec[a].push_back({b,dis});
        vec[b].push_back({a,dis});
    }
    int distance[nodes+1];
    memset(distance,100000007,sizeof(distance));
    bool visited[nodes+1];
    memset(visited,false,sizeof(visited));
    shortestDistance(s,visited,vec,distance);
    for (int i = 0; i < nodes; i++)
			printf("SSSP(%d, %d) = %d\n", s, i, distance[i]);
}

/*
// Sample input
5 5 1
0 1 1
0 2 10
1 3 2
2 3 10
3 4 3

Output is:
SSSP(1, 0) = 1
SSSP(1, 1) = 0
SSSP(1, 2) = 11
SSSP(1, 3) = 2
SSSP(1, 4) = 5
*/