#include<vector>
#include<iostream>
#define MAX 1e9

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int>> graph(n+1,vector<int>(n+1,MAX));
    int a,b,c;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b >> c;
        if(c<graph[a][b])
            graph[a][b]=c;
    }
    for(int i=1;i<n+1;i++){
        graph[i][i]=0;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            for(int k=1;k<n+1;k++){
                if(graph[j][i]+graph[i][k]<graph[j][k])
                    graph[j][k]=graph[j][i]+graph[i][k];
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(graph[i][j]==MAX)
                graph[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
}