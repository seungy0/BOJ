//숨바꼭질3

#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<int> t(100002,0);
    vector<bool> visited(100002,false);
    deque<int> dq;
    dq.push_back(n);
    visited[n]=true;
    while(!dq.empty()){
        int tmp=dq.front();
        dq.pop_front();
        if(tmp==k){
            break;
        }
        if(2*tmp<100001 && !visited[2*tmp]){
            dq.push_front(2*tmp);
            visited[2*tmp]=true;
            t[2*tmp]=t[tmp];
        }
        if(tmp-1>=0 && !visited[tmp-1]){
            dq.push_back(tmp-1);
            visited[tmp-1]=true;
            t[tmp-1]=t[tmp]+1;
        }
        if(tmp<100000 && !visited[tmp+1]){
            dq.push_back(tmp+1);
            visited[tmp+1]=true;
            t[tmp+1]=t[tmp]+1;
        }
    }
    // for(int i=0;i<=k;i++)
    //     cout << t[i] <<" ";
    cout << t[k];
}