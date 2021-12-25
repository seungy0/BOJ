#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    stack<pair<int,int>> s;
    for(int i=1;i<=n;i++){
        int hi;
        cin >> hi;
        if(s.empty()){
            cout << "0 "; 
            s.push({i,hi});
        }
        else{
            while(!s.empty()&&s.top().second<hi){
                s.pop();
            }
            if(!s.empty()){
                cout << s.top().first << " ";
            }
            else{
                cout << "0 ";
            }
            s.push({i,hi});
        }
    }
}