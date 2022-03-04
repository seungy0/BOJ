#include<bits/stdc++.h>
#define INF 1987654321
using namespace std;
int n, nbit;
int graph[16][16];
int memo[16][1<<16];

int dfs(int node, int bit){  //시작점부터 node 까지의 거리를 구하는게 아닌 node 부터 시작점까지 돌아오는데 필요한 거리를 반환하는 함수(어떻게 모변 당연한데 착작했던 부분)
    if(bit==nbit){
        if(graph[node][0]==0)
            return INF;
        else
            return graph[node][0];
    }
    if(memo[node][bit]!=-1) return memo[node][bit];
    memo[node][bit]=INF;
    for(int i=0;i<n;i++){
        if(graph[node][i]==0) continue;
        if(bit&(1<<i)) continue; // bit&(1<<i)==(1<<i)는 안되고 bit&(1<<i)는 왜 될까...

        memo[node][bit]=min(memo[node][bit], graph[node][i] + dfs(i,bit|(1<<i)));
    }
    return memo[node][bit];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    nbit=(1<<n)-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> graph[i][j];
        }
    }
    
    memset(memo,-1,sizeof(memo));
    cout << dfs(0,1); 
}