#include<bits/stdc++.h>

using namespace std;
int n,m;
vector<int> order;
vector<vector<int>> graph;
queue<int> q;
void input(){
    cin >> n >> m;
    int a,b;
    order.assign(n+1,0);
    graph.assign(n+1,{});
    for(int i=0;i<m;i++){
        cin >> a >> b;
        order[b]++;
        graph[a].emplace_back(b);
    }
}
void solve(){
    for(int i=1;i<=n;i++)
        if(order[i]==0)
            q.push(i);
    while(!q.empty()){
        int tmp = q.front();
        cout << tmp << " ";
        q.pop();
        for(auto i:graph[tmp]){
            order[i]--;
            if(order[i]==0){
                q.push(i);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    solve();
}