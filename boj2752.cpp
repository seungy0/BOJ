#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c;
    d=min({a,b,c});
    e=max({a,b,c});
    f=a+b+c-d-e;
    cout << d << " " << f << " " << e;
    
}