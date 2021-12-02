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
    vector<int> t(100001,0);
    vector<bool> visited(100001,false);
    deque<int> dq;
    dq.push_bacl(n);
    visited[n]=true;
    while(!dq.empty()){
        int tmp=dq.front();
        
    }
    for(int i=0;i<=k;i++)
        cout << dp[i] <<" ";
    cout << dp[k];
}