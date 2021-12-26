#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    long long tmp,ans=0;
    cin >> n;
    stack<int> s;
    while(n--){
        cin >> tmp;
        while(!s.empty()&&s.top()<=tmp)
            s.pop();
        ans+=s.size();
        //cout << "tmp" << tmp << "ans" << ans << "\n";
        s.push(tmp);
    }
    cout << ans;
}