#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,t;
    string s;
    cin >> n;
    queue<int> q;
    while(n--){
        cin >> s;
        if(!s.compare("push")){
            cin >> t;
            q.push(t);
        }
        else if(!s.compare("pop")){
            if(!q.empty()){
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << "-1\n";
        }
        else if(!s.compare("size")){
            cout << q.size() << "\n";
        }
        else if(!s.compare("empty")){
            if(q.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if(!s.compare("front")){
            if(q.empty())
                cout << "-1\n";
            else
                cout << q.front() << "\n";
        }
        else if(!s.compare("back")){
            if(q.empty())
                cout << "-1\n";
            else
                cout << q.back() << "\n";
        }
    }
}