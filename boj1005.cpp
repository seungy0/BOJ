#include<bits/stdc++.h>
#define MAX 1001
using namespace std;

vector<int> building(MAX,0);
vector<vector<int>> adjlist(MAX);
vector<int> adjcount(MAX,0);
int d[MAX]={0,}; 


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n, k, a, b, w;
    cin >> t;
    for(int i=0;i<t;i++){
        fill(d, d + MAX, 0);
        fill(adjcount.begin(),adjcount.end(),0);
        for (int j = 0; j < MAX; j++) adjlist[j].clear();
        queue<int> q;
    
        cin >> n >> k;
        for(int j=1;j<=n;j++)
            cin >> building[j];
        for(int j=1;j<=k;j++){
            cin >> a >> b;
            adjlist[a].push_back(b);
            adjcount[b]++;
        }
        cin >> w;
        for(int j=1;j<=n;j++){
            if(adjcount[j]==0){
                q.push(j);
                d[j]=building[j];
                // cout << "push" << j << "\n";
            }
        }
        while(q.empty()==0){
            int tmp=q.front();
            q.pop();
            for(int j=0;j<adjlist[tmp].size();j++){
                int jtime=d[tmp]+building[adjlist[tmp][j]];
                if(jtime>d[adjlist[tmp][j]]){
                    d[adjlist[tmp][j]]=jtime;
                    q.push(adjlist[tmp][j]);
                    // cout << "push" << adjlist[tmp][j] << "\n";
                }
                    
            }
        }
        // for(int j=1;j<=n;j++)
        //     cout << "i=" << j <<" "<< d[j]<<"\n";
        cout << d[w] << "\n";
    }
} 