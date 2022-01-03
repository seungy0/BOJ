#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    queue<int> q;
    int n;
    cin >> n;
    int r;
    for(int i=1;i<=n;i++)
        q.push(i);
    while(!q.empty()){
        r=q.front();
        q.pop();
        if(!q.empty()){
            r=q.front();
            q.pop();
            q.push(r);
        }
    }
    cout << r;
}