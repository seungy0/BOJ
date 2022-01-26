#include<bits/stdc++.h>
using namespace std;

int n;
int a[100001]={0,};
int avgdp[100001][2];
int avgcnt[100001][2];
int meddp[100001][2];
int medcnt[100001][2];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    avgdp[1][0]=a[1];
    meddp[1][0]=a[1];
    avgcnt[1][0]++;
    medcnt[1][0]++;
    for(int i=2;i<=n;i++){
        avgdp[i][0]=avgdp[i-2][0]+a[i];
        avgcnt[i][0]=avgcnt[i-2]+1;
        if(avgdp[i][0]/(float)avgcnt[i][0]<(avgdp[i-1][0]+a[i])/(float)(avgcnt[i-1][0]+1)){
            avgdp[i][0]=avgdp[i-1][0]+a[i];
            avgcnt[i][0]=avgcnt[i-1][0]+1;
        }
        if(avgdp[i][0]/(float)avgcnt[i][0]<(avgdp[i-1][1]+a[i])/(float)(avgcnt[i-1][1]+1)){
            avgdp[i][0]=avgdp[i-1][1]+a[i];
            avgcnt[i][0]=avgcnt[i-1][1]+1;
        }
        
        cout << "\n";
    }
}