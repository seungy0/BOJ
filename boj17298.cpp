#include<bits/stdc++.h>
#define max 1000001
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,hi;
    cin >> n;
    stack<int> s;
    stack<int> s1;
    stack<int> ans;
    for(int i=1;i<=n;i++){
        cin >> hi;
        s1.push(hi);
    }
    s.push(max);
    for(int i=1;i<=n;i++){
        hi=s1.top();
        s1.pop();
        while(s.top()<=hi){
            s.pop();
        }
        if(s.top()!=max){
            ans.push(s.top());
        }
        else{
            ans.push(-1);
        }
        s.push(hi);
    }
    while(n--){
        cout << ans.top() << " ";
        ans.pop();
    }
}