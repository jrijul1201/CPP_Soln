/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/cheapest-flights-within-k-stops/
    Author :- Ashutosh Sharma [https://github.com/ashu3103]
*/

#include<bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    
    // The idea is to use Dijkstra's algorithm to find the shortest path from src to dest
    // But we need to stop the algorithm when we reach k+1 nodes from src
    // So we will use a priority queue to store the nodes in the order of their distance from src
    // We will also use a map to store the distance of each node from src
    // We will also use a map to store the number of nodes in the shortest path from src to each node
    // We will also use a map to store the shortest path from src to each node
    
    // We will also use a map to store the number of nodes in the shortest path from src to each node

    vector<vector<pair<int,int>>> graph(n);
    for(auto e: flights){
        graph[e[0]].push_back({e[1],e[2]});
    }
    
    vector<int> dist(n,1e5) , prev(n);
    dist[src] = 0;
    prev = dist;
    k++;
    while(k--){
        for( int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                int ind = graph[i][j].first;
                int val = graph[i][j].second;
                // at x'th step there can be more than one updates
                // so we compare the update value, of the index 
                // gettting updated 
                if(dist[ind] > prev[i] + val){
                    dist[ind] = prev[i] + val;
                }
            }
        }
        prev = dist;
    }
    if(prev[dst] == 1e5){
        return -1;
    }
    return prev[dst];
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> flights(m,vector<int>(3));
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            cin>>flights[i][j];
        }
    }

    int src,dest,k;
    cin>>src>>dest>>k;

    cout << findCheapestPrice(n, flights, src, dest, k) << endl;

    return 0;
}