#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);	cin.tie(0);
	long long n;cin>>n;
	int a[100001]={0,};
	int k=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[x]++;
		k=max(x,k);
	}
	int cnt=a[1];
	int p=0;
	for(int i=2;i<=k;i++){
		if(a[i]<=0)
            continue;
        if(p>=a[i]){
            p-=a[i];continue;
        }
		a[i]-=p;
        p=0;
		cnt+=a[i]/i;
		if(a[i]%i>0){
			cnt++;
			p=i-(a[i]%i);
        }
	}
	cout<<cnt;
	return 0;
}