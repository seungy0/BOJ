#include<cstdio>
#include<vector>
#include<queue>
#define MAX 1e7
using namespace std;

int main()
{
    //ios::sync_with_stdio(0); cin.tie(0);
    int n,a,b;
    scanf("%d",&n);
    vector<vector<int>> graph(n+1);
    vector<bool> visit(n+1,false);
    queue<int> q;
    vector<int> answer(n+1,0);
    //cout << "input end\n";
    for(int i=0;i<n-1;i++){
        scanf("%d%d",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    q.push(1);
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        visit[tmp]=true;
        for(int i=0;i<graph[tmp].size();i++){
            int there = graph[tmp][i];
            if(visit[there]) continue;
            answer[there]=tmp;
            q.push(there);
        }
    }
    for(int i=2;i<n+1;i++){
        printf("%d\n",answer[i]);
        //cout << answer[i] << endl;
    }
}