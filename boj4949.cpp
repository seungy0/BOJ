#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    while(true){
        string s;
        bool stat = true;
        stack<char> st;
        getline(cin,s);
        if(s.compare(".")==0) break;
        for(char i:s){
            if(i=='('||i=='[')
                st.push(i);
            if(i==')'){
                if(st.empty()){
                    stat = false;
                    cout << "no\n";
                    break;
                }
                if(st.top()=='(')
                    st.pop();
                else{
                    stat = false;
                    cout << "no\n";
                    break;
                }   
            }
            if(i==']'){
                if(st.empty()){
                    stat = false;
                    cout << "no\n";
                    break;
                }
                if(st.top()=='[')
                    st.pop();
                else{
                    stat = false;
                    cout << "no\n";
                    break;
                }
            }
            
        }
        if(st.empty()&&stat)
            cout <<"yes\n";
        else if(stat)
            cout << "no\n";
    }
}