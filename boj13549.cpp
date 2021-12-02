//숨바꼭질3

#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<vector<int>> dp(100001,vector<int)(2,0));
    vector<bool> visited(100001,false);
    queue<vector<int>> q;
    q.push({n,0});
    visited[n]=true;
    while(1){
        vector<int> tmp=q.pop();
        int k=tmp[0];
        while(k<)
    }
    for(int i=0;i<=k;i++)
        cout << dp[i] <<" ";
    cout << dp[k];
}