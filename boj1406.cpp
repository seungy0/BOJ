#include<bits/stdc++.h>
using namespace std;

list<char> edit;
string a;
int m;
int main(){
    cin >> a;
    for(auto i:a){
        edit.push_back(i);
    }
    auto t=edit.end();
    cin >> m;
    while(m--){
        char tmp;
        cin >> tmp;
        switch(tmp){
            case 'P':
                char add;
                cin >> add;
                edit.insert(t,add);
                break;
            case 'L':
                if(t!=edit.begin()) t--;
                break;
            case 'D':
                if(t!=edit.end()) t++;
                break;
            case 'B':
                if(t!=edit.begin())
                {
                    t=edit.erase(--t);
                }
                break;
        }
    }
    for(auto i:edit) cout <<i;
}
