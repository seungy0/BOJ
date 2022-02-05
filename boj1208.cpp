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
// int main(void)

// {

//         ios_base::sync_with_stdio(0);

//         cin.tie(0);

//         int N, S;

//         cin >> N >> S;

 

//         vector<int> v(N);

//         for (int i = 0; i < N; i++)

//                  cin >> v[i];

 

//         //배열을 반으로 나누고

//         int half = N / 2;

//         //나눈 배열 중 첫 번째 배열의 모든 부분 집합의 합을 저장

//         vector<int> first(1 << (N - half));

//         for (int i = 0; i < 1 << (N - half); i++)

//                  for (int j = 0; j < N - half; j++)

//                          if (i&(1 << j))

//                                  first[i] += v[j];

//         //나머지 배열의 모든 부분 집합의 합을 저장

//         vector<int> second(1 << half);

//         for (int i = 0; i < 1 << half; i++)

//                  for (int j = 0; j < half; j++)

//                          if (i&(1 << j))

//                                  second[i] += v[j + (N - half)];

 

//         //오름차순 정렬

//         sort(first.begin(), first.end());

//         //내림차순 정렬

//         sort(second.begin(), second.end(), greater<int>());

       

//         int idx=0, idx2 = 0;

//         long long result = 0;

//         while (idx < 1 << (N - half) && idx2 < 1 << half)

//         {

//                  if (first[idx] + second[idx2] == S)

//                  {

//                          long long cnt = 1, cnt2 = 1;

//                          idx++, idx2++;

//                          while (idx < 1 << (N - half) && first[idx] == first[idx - 1])

//                          {

//                                  idx++;

//                                  cnt++;

//                          }

//                          while (idx2 < 1 << half && second[idx2] == second[idx2 - 1])

//                          {

//                                  idx2++;

//                                  cnt2++;

//                          }

//                          result += cnt * cnt2;

//                  }

//                  else if (first[idx] + second[idx2] < S)

//                          idx++;

//                  else if (first[idx] + second[idx2] > S)

//                          idx2++;

//         }

       

//         //배열을 반으로 나누었으므로 공집합(0)이 원래는 하나인데 두번 나옴

//         if (S == 0)

//                  result--;

//         cout << result << "\n";

//         return 0;

// }
