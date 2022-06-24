#include <bits/stdc++.h>
using namespace std;
vector<int> nodes;
int n;
void input(){
    cin >> n;
    string wb;
    cin >> wb;
    char prev;
    int m,tmp;
    cin >> m;
    for(int i=1; i<n ;i++){
        cin >> tmp;
        if(wb[i]!=wb[i-1]){
            nodes.push_back(m);
            m=tmp;
        }
        else if(m<tmp){
            m=tmp;
        }
    }
    nodes.push_back(m);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    input();
    nodes[0]=0;
    nodes[nodes.size()-1]=0;
    sort(nodes.begin(), nodes.end());
    long long ans=0;
    int cnt = (int)ceil((nodes.size()-2)/2.0);
    for(int i=nodes.size()-1; i>=nodes.size()-cnt; i--){
        ans+=(long long)nodes[i];
    }
    cout << ans;
}