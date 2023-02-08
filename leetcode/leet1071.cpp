class Solution {
public:
    int gcd(int a, int b){
        int n = 0;
        while(b!=0) {
            n = a%b;
            a = b;
            b = n;
        }
        return a;
    }
    string gcdOfStrings(string str1, string str2) {
        int la = str1.length();
        int lb = str2.length();
        int gcdLength;
        if(la>lb) {
            gcdLength = gcd(la,lb);
        }
        else {
            gcdLength = gcd(lb,la);
        }
        for(int i = 1;i <= gcdLength;i++) {
            if(gcdLength%i==0){
                bool flag = false;
                int candiLength = gcdLength/i;
                string candi = str1.substr(0,candiLength);
                for(int j = 0;j < la;j += candiLength){
                    if(str1.substr(j,candiLength)!=candi){
                        flag=true;
                        break;
                    }
                }
                if(flag) continue;
                for(int j = 0;j < lb;j += candiLength){
                    if(str2.substr(j,candiLength)!=candi){
                        flag=true;
                        break;
                    }
                }
                if(flag) continue;
                return candi;
            }
        }
        return "";
    }
};
