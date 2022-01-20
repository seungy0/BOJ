#define MAX 130
#include<bits/stdc++.h>
#include<string.h>
int m=0,cnt=0;
int incl[MAX]={0,};
using namespace std;
int lengthOfLongestSubstring(string s);
int main(){
    string tmp=" ";
    cout << (int)tmp[0];
    cout << lengthOfLongestSubstring(" ");
}
int lengthOfLongestSubstring(string s) {
    // if(s.length()==0) return 0;
    for(int i=0;i<s.length();i++){
        int j=i;
        while(j>=0){
            if(incl[s[j]]==0){
                incl[s[j]]++;
                cnt++;
                if(m<cnt)
                    m=cnt;
            }
            else{
                if(m<cnt)
                    m=cnt;
                cnt=0;
                fill(incl,incl+MAX,0);
                break;
            }
            j--;
        }
    }
    return m;
}