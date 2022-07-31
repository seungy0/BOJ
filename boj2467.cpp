#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> v;
long long answer;
void input(){
    cin >> n;
    v.assign(n,0);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
}
void solve(){
    int a = 0,b=n-1;
    int answer1=0, answer2=n-1;
    answer=(long long)v[a]+(long long)v[b];
    long long tmp = answer;
    while(a<b){
        tmp = (long long)v[a]+(long long)v[b];
        if(abs(tmp)<abs(answer)){
            answer = tmp;
            answer1 = a;
            answer2 = b;
        }
        if(tmp>0){
            b--;
        }
        else{
            a++;
        }
    }
    cout << v[answer1] << " " << v[answer2];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    solve();
} 