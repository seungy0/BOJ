#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int K;
    stack<int> s;
    cin >> K;
    int key;
    for(int i=0;i<K;i++){
        cin >> key;
        if(key!=0)
            s.push(key);
        else if(!s.empty()){
            s.pop();
        }
    }
    int sum=0;
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    cout << sum;
}