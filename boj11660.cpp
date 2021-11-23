#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,tmp;
    int x1,y1,x2,y2;
    cin >> n >> m;
    vector<vector<int>> x(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> tmp;
            x[i][j]=x[i][j-1]+tmp;
        }
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            x[i][j]+=x[i-1][j];
        }
    }
    for(int i=0;i<m;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << x[x2][y2] - x[x2][y1-1] - x[x1-1][y2] + x[x1-1][y1-1] << "\n";
        
    }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout << x[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}