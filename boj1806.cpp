#include<bits/stdc++.h>

using namespace std;
int n,s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    vector<int> arr(n+1,0);
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        if(arr[i]>=s){
            cout << 1;
            return 0;
        }
    }
    int start=1,end=3,ans=n+1,tmp=arr[1]+arr[2];
    while(start+2<=end){
        if(tmp>=s){
            ans=min(ans,end-start);
            tmp-=arr[start++];
        }
        else if(end>n) break;
        else tmp+=arr[end++];
    }
    if(ans==n+1) cout << 0;
    else cout << ans;
}