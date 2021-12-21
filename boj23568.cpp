#include<bits/stdc++.h>

using namespace std;
int n;
// struct myOrder
// {
// 	bool operator() (const vector<int>& left, const vector<int>& right) const
// 	{
// 		return left[0] < right[0];
// 	}
// };
vector<vector<int>> triple;
bool cmp(const vector<int>& a, const vector<int>& b){
    return a[0]<b[0];
}
auto binarysearch(vector<vector<int>>& arr,int target,int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid][0]==target)
            return arr.begin()+mid;
        else if(arr[mid][0]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}
// vector<int>* binarysearch(set<vector<int>>& arr,int target,int size){
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid][0]==target)
//             return arr.begin()+mid;
//         else if(arr[mid][0]>target){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return arr.begin();
// }
int main(){
    // set<vector<int>,myOrder> s;
    int current;
    cin >> n;
    for (int i=0;i<n;i++){
        int a,c;
        char b; //R은 82 L은 76 
        cin >> a >> b >> c;
        // s.insert({a,b,c});
        triple.push_back({a,b,c});
    }
    sort(triple.begin(),triple.end(),cmp);
    cin >> current;
    while(!triple.empty()){
        auto tmp=binarysearch(triple,current,n--);
        vector<int> next = *tmp;
        if(next[1]==82){
            current+=next[2];
        }
        else{
            current-=next[2];
        }
        triple.erase(tmp);
    }
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<3;j++)
    //         cout << triple[i][j];
    //     cout << "\n";
    // }
    cout << current;
}