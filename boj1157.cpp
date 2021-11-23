#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int x[91]={0,};
    int i,j=0;
    int ans=-1;
    char ans2;

    cin >> a;
    for(i=0;i<a.length();i++){
        if(a[i]>96)
            x[a[i]-32]++;
        else
            x[a[i]]++;
    }
    for(i=0;i<91;i++){
        if(ans<x[i]){
            ans=x[i];
            ans2=i;
        }
    }
    for(i=0;i<91;i++){
        if(ans==x[i])
            j++;
    }
    if(j>1)
        cout << "?";
    else
        cout << ans2;
}