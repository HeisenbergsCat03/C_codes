#include "bits/stdc++.h"
using namespace std;
#define ll long long
vector<int> topoSort(int V, vector<int> adj[]){
    for(int i = 0; i < V; i++ ){
        for(auto v : adj[i]){
            indegree[v]++;}
        }
        vector<int> ans;
        queue<int> q;
        for(int i = 0; i<V; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        return ans;
    
}