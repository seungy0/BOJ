#include<iostream>
#include<vector>

using namespace std;
//첫째 틀린풀이 O(n)
// int main(){
//     ios::sync_with_stdio(0); cin.tie(0);
//     unsigned long long n;
//     cin >> n;
//     vector<unsigned int> pibo(10,(unsigned long long)0);
//     pibo[1]=(unsigned long long)1;
//     for(int i=2;i<=n;i++){
//         pibo[i%8]=(pibo[(i-1)%8]+pibo[(i-2)%8])%1000000007;
//     }
//     cout << pibo[n%8];
// }
// 둘째 틀린 풀이 O(logn)
// unsigned long long pib(unsigned long long n);
// int main(){
//     ios::sync_with_stdio(0); cin.tie(0);
//     unsigned long long n;
//     cin >> n;
//     cout << pib(n);
// }
// unsigned long long pib(unsigned long long n)
// {
//     if(n==1 || n==2) return 1;
//     else if(n<=0) return 0;
//     else
//     {
//         if(n%2==0)
//         {
//             unsigned long long t=n>>1;
//             unsigned long long x=pib(t-1);
//             unsigned long long y=pib(t);
//             return ((2*x+y)*y)%1000000007;
//         }
//         else
//         {
//             unsigned long long t=(n+1)>>1;
//             unsigned long long x=pib(t-1);
//             unsigned long long y=pib(t);
//             return (x*x + y*y)%1000000007;
//         }
//     }
// }
typedef vector<vector<long long>> matrix;
const long long mod = 1000000007;

long long n;

matrix operator * (matrix& a, matrix& b)
{
	matrix c(2, vector<long long>(2));

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++){
			for (int k = 0; k < 2; k++)
				c[i][j] += a[i][k] * b[k][j];

			c[i][j] %= mod;
		}
	return c;	
}

int main()
{
	cin >> n;

	matrix ans = {{1,0}, {0,1}};
	matrix a = {{1,1}, {1,0}};

	while (n > 0)
	{
		if (n % 2 == 1)
			ans = ans * a;
		a = a * a;
		n /= 2;
	}
	
	cout << ans[0][1] << '\n';
}