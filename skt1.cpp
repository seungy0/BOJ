#include <string>
#include <vector>

using namespace std;
int dp[1000001]={0,};
int solution(int money, vector<int> costs) {
    int coin[6]={1,5,10,50,100,500};
    int answer = 0;
    for(int i = 1; i <= money; i++) {
        dp[i] = -1;
        for(int j = 0; j < 6; j++) {
            if(coin[j] <= i) {
                if(dp[i - coin[j]] < 0) continue;
                if(dp[i] < 0) dp[i] = dp[i - coin[j]] + costs[j];
                else if(dp[i - coin[j]] + costs[j] < dp[i]) dp[i] = dp[i - coin[j]] + costs[j];
            }
        }
    }
    answer=dp[money];
    return answer;
}