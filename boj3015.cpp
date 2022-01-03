#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,cnt,hi;
    long long int ans=0;
    cin >> n;
    stack<pair<int,int>> s;
    for(int i=1;i<=n;i++){
        cnt=1;
        cin >> hi;
        while(!s.empty()&&s.top().first<=hi){
            if(s.top().first==hi){
                cnt+=s.top().second;
            }
            ans+=s.top().second;
            s.pop();
        }
        if(!s.empty())
            ans++;
        //cout << "i " << i << "ans " << ans << "\n";
        s.push({hi,cnt});
    }
    cout << ans;
}
