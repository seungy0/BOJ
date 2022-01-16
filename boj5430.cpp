#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string p,numlist;
        int stat=1,k=1;
        deque<int> q;
        cin >> p;
        int n;
        cin >> n;
        cin >> numlist;
        int i=0;
        while(numlist[i]!='\0'){
            int x=0;
            while(numlist[i]>='0' && numlist[i]<='9'){
                x*=10;
                x+=(numlist[i]-'0');
                i++;
            }
            if(x){
                q.push_back(x);
            }
            i++;
        }
        // while(!q.empty()){
        // cout << q.front() << " ";
        // q.pop_front();
        // }
        for(auto i:p){
            if(i=='R'){
                stat*=-1;
            }
            else{
                if(q.empty()){
                    cout << "error\n";
                    k=0;
                    break;
                }
                else if(stat==1){
                    q.pop_front();
                }
                else{
                    q.pop_back();
                }
            }
        }
        int tmp=q.size();
        if(tmp==0&&k==1)
        cout<< "[]\n";
        else if(tmp==1&&k==1){
            cout << "[" << q.front() << "]\n";
            q.pop_front();
        }
        else if(k==1&&!q.empty()){

            if(stat==1){
            cout << "[";
            for(int i=0;i<tmp-1;i++){
                cout << q.front() << ",";
                q.pop_front();
            }
            cout << q.front() << "]\n";
            }
            else{
                cout << "[";
                for(int i=0;i<tmp-1;i++){
                cout << q.back() << ",";
                q.pop_back();
            }
            cout << q.back() << "]\n";
            }
        }
    }
}