#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    stack<int> s;
    int k;
    cin >> k;
    string order;
    for(int i=0;i<k;i++){
        cin >> order;
        if(!order.compare("push")){
            int key;
            cin >> key;
            s.push(key);
        }
        else if(!order.compare("top")){
            if(!s.empty())
                cout << s.top() << "\n";
            else
                cout << -1 << "\n";
        }
        else if(!order.compare("size")){
            cout << s.size() << "\n";
        }
        else if(!order.compare("empty")){
            cout << s.empty() << "\n";
        }
        else{
            if(!s.empty()){
                cout << s.top()<<"\n";
                s.pop();
            }
            else
                cout << -1 << "\n";
        }
    }
}