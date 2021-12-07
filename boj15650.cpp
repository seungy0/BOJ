#include<iostream>
#include<vector>
#include<string>
using namespace std;
void backt(int x, int n, int m, vector<int>& a)
{
    if(x==m+1){
        for(int i=1;i<m+1;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    else{
        for(int i=a[x-1]+1;i<=n;i++){
            a[x]=i;
            backt(x+1,n,m,a);
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> a(m+1);
    backt(1,n,m,a);

}