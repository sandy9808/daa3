#include<bits/stdc++.h>
using namespace std;
void shortestDistance(bool visited[],vector<pair<int,int>>vec[],int distance[])
{   
    visited[1]=true;
    distance[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
    p.push({0,1});
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
    int nodes,edges;
    cin >> nodes >> edges;
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
    shortestDistance(visited,vec,distance);
    for(i=2;i<=nodes;i++)
    cout << distance[i] << " ";
}