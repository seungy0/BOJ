//평범한 배낭 01 knapsack 문제

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<vector<int>> dp(n+1,vector<int>(k+1,0));
    vector<vector<int>> wv(n+1,vector<int>(2,0));
    for(int i=1;i<=n;i++){
        cin >> wv[i][0] >> wv[i][1];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j>=wv[i][0]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-wv[i][0]]+wv[i][1]);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=1;j++){
    //         cout << wv[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=k;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << dp[n][k];
}
