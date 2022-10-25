/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/is-graph-bipartite/
    Author :- Ashutosh Sharma [https://github.com/ashu3103]
*/

#include<bits/stdc++.h>
using namespace std;

// running a BFS on the graph
bool checkbipartite(int i,vector<int>&vis,vector<vector<int>>A){
    queue<int> q;   // queue to store the nodes
    q.push(i);    // push the first node
    int curr = 1;
    while(!q.empty()){ // while the queue is not empty
        int sz = q.size(); 
        for(int i=0;i<sz;i++){
            int x = q.front();
            q.pop();
            vis[x] = curr;
            for(auto it: A[x]){
                if(vis[it]==curr){
                    return false;
                }else if(!vis[it]){
                    q.push(it);
                }
            }
        }
        curr++;
    }
    return true;
}

bool isBipartite(vector<vector<int>>& A){
    int n = A.size();
    vector<int> vis(n,0);
    for(int i=0;i<n;i++){ // for each node
        if(vis[i]==0){
            if(!checkbipartite(i,vis,A)){ // if the graph is not bipartite
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n; // number of nodes
    cin>>n;
    int m;
    cin>>m; // number of edges
    vector<vector<int>> A(m,vector<int>(2));
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cin>>A[i][j];
        }
    }
    vector<vector<int>> G(n);
    for(int i=0;i<m;i++){
        G[A[i][0]].push_back(A[i][1]);
        G[A[i][1]].push_back(A[i][0]);
    }
    cout<<isBipartite(G)<<endl;
    return 0;
}