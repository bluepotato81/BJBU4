#include <iostream>
#include <vector>
#include <queue>

#define INF 2000000000

using namespace std;

vector<vector<pair<int,int>>> bus;

vector<int> dist;
vector<int> visited;
queue<int> q;

void djik(int r) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0,r});
    dist[r]=0;

    while(!pq.empty()) {
        int curcost=pq.top().first;
        int curplace=pq.top().second;
        pq.pop();

        if(visited[curplace]) {
            continue;
        }

        visited[curplace]=1;

        for(auto k:bus[curplace]) {
            int ncost=curcost+k.second;
            if(ncost<dist[k.first]) {
                dist[k.first]=ncost;
                pq.push({ncost,k.first});
            }
        }
    }
}

int main() {
    int n,m;
    scanf("%d\n%d", &n,&m);

    bus.resize(n+1);
    visited.resize(n+1,0);
    dist.resize(n+1, INF);
    for(int i=0; i<m;i++) {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        bus[a].push_back({b,c});
    }

    int s, d;
    scanf("%d %d", &s, &d);

    djik(s);

    printf("%d", dist[d]);

    return 0;
}
