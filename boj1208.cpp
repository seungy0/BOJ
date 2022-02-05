#include<bits/stdc++.h>

using namespace std;
int n,s;
long long cnt=0;
map<int,int> mp;
vector<int> arr;
void R(int k,int sum){
    if(k==n){
        mp[sum]++;
    }
    else{
        R(k+1,sum+arr[k]);
        R(k+1,sum);
    }
}
void L(int k,int sum){
    if(k==n/2)
        cnt+=mp[s-sum];
    else{
        L(k+1,sum+arr[k]);
        L(k+1,sum);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    R(n/2,0);
    L(0,0);
    if(s==0) cout << cnt-1;
    else cout << cnt;
}