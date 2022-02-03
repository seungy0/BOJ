#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> st;
    int ans=0;
    string s;
    cin >> s;
    char last='(';
    for(auto i:s){
        if(i=='(')
            st.push(i);
        else{
            if(!st.empty()&&last=='('){
                st.pop();
                ans+=st.size();
            }
            else{
                st.pop();
                ans+=1;
            }
        }
        last=i;
    }
    cout << ans;
}