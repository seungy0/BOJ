#include <string>
#include <vector>
#include <iostream>
using namespace std;
int result[251][251] = {0};
void path(){
    for(int i=0;i<251;i++){
        result[0][i]=1;
        result[i][0]=1;
    }
    for(int i=1;i<251;i++){
        for(int j=1;j<251;j++){
            result[i][j]=(result[i][j-1]+result[i-1][j])%10000019;
        }
    }
}
int solution(int width, int height, vector<vector<int>> diagonals) {
    long long answer = 0;
    path();
    for(int i=0;i<diagonals.size();i++) {
        int x=diagonals[i][0],y=diagonals[i][1];
        answer=(answer+(long long)result[x-1][y]*(long long)result[width-x][height-y+1])%10000019;
        answer=(answer+(long long)result[x][y-1]*(long long)result[width-x+1][height-y])%10000019;
    }
    return answer;
}
int main(){
    cout << solution(51,37,{{17,19}});
}