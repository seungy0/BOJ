// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     ios::sync_with_stdio(0); cin.tie(0);
//     string nums="";
//     string s="";
//     cin >> s;
//     int ind=0;
//     for(int i = 1; i < 1000; i++){
//         nums+=(to_string(i));
//     }
//     int l = s.length();
//     for(int i = 0; i < 1000000000; i++){
//         int check =0;
//         for(int j=0;j<l;j++){
//             if(s[j]!=nums[i+j]){
//                 check =1;break;
//             }
//         }
//         if(check==0){
//             if(i<9){
//                 cout << i+1 << " ";
//             }
//             else if(i<189){
//                 cout << nums[i] << nums[i+1] << " ";
//             }
//             else{
//                 cout << nums[i] << nums[i+1] << nums[i+2] << " ";
//             }
//             if(i+l-1<9){
//                 cout << i+l;
//             }
//             else if(i+l-1<189){
//                 cout << nums[i+l-2] << nums[i+l-1];
//             }
//             else{
//                 cout << nums[i+l-3] << nums[i+l-2] << nums[i+l-1];
//             }
//             break;
//         }
//         if(i>8) i++;
//         if(i>188) i++;
//     }
//     cout << "\n" << "s" <<nums[0] <<"e";
// }
#include <bits/stdc++.h>
using namespace std;
string s;
void input() {
    cin >> s;
}
void solve() {
    
    int f = s[0] - '0';
    for (int i = f;; i++) {
        string res;
        for (int j = i;; j++) {
            res += to_string(j);
            if (res.size() == s.size()) {
                if (res == s) {
                    cout << i << " " << j << "\n";
                    return;
                }
            }

            else if (res.size() > s.size())break;
        }
    }
 
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
}