#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> s;
    vector<char> ans;
    int tmp, n, cur=0;
    cin >> n;
    cin >> tmp;
    for(int i=1;i<=tmp;i++){
        s.push(i);
        cur++;
        ans.push_back('+');
    }
    s.pop();
    ans.push_back('-');
    for(int i=0;i<n-1;i++){
        cin >> tmp;
        if(!s.empty()){
            if(s.top()>tmp){
                cout << "NO";
                return 0;
            }
            else if(s.top()==tmp){
                s.pop();
                ans.push_back('-');
            }
            else{
                for(int j=cur+1;j<=tmp;j++){
                    s.push(j);
                    cur++;
                    ans.push_back('+');
                }
                s.pop();
                ans.push_back('-');
            }
        }
        else{
            for(int j=cur+1;j<=tmp;j++){
                s.push(j);
                cur++;
                ans.push_back('+');
            }
            s.pop();
            ans.push_back('-');
        }
    }
    for(auto i:ans){
        cout << i << "\n";
    }
}