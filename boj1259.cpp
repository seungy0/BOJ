#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string s="a";
    cin >> s;
    while(s.compare("0")){
        int check=1;
        for(auto a=s.begin(), b=--s.end();a!=s.end();a++,b--){
            if(*a!=*b){
                cout << "no\n";
                check=0;
                break;
            }
        }
        if(check)
            cout << "yes\n";
        cin >> s;
    }

}