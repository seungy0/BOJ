#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
void backt(int x, int n, int m, vector<int>& a,vector<int>& b, vector<bool> c)
{
    if(x==m+1){
        for(int i=1;i<m+1;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    else{
        for(int i=1;i<=n;i++){
            
            if(c[i]){
                a[x]=b[i];
                c[i]=false;
                backt(x+1,n,m,a,b,c);
                c[i]=true;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    vector<int> b(n+1);
    vector<int> a(m+1);
    vector<bool> c(n+1,true);
    for(int i=1;i<n+1;i++){
        cin >> b[i];
    }
    sort(b.begin()+1,b.end());
    backt(1,n,m,a,b,c);

}
