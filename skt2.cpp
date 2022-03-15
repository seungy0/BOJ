#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(int n, bool clockwise) {
    vector<vector<int>> answer(n,vector<int>(n,0));
    int dx[4]={0,1,-0,-1};
    int dy[4]={1,0,-1,0};
    int counter=1;
    if(clockwise){
        if(n%2==0){
            int x[4]={0,0,n-1,n-1};
            int y[4]={0,n-1,n-1,0};
            for(int iter=n-1, jp=0;iter>0;iter-=2){
                for(int i=0;i<iter;i++,counter++){
                    if(i==iter-1) jp=(jp+1)%4;
                    for(int j=0;j<4;j++){
                        answer[x[j]][y[j]]=counter;
                        x[j]+=dx[(j+jp)%4];
                        y[j]+=dy[(j+jp)%4];
                    }
                }
            }
        }
        else{
            int x[4]={0,0,n-1,n-1};
            int y[4]={0,n-1,n-1,0};
            for(int iter=n-1, jp=0;iter>0;iter-=2){
                for(int i=0;i<iter;i++,counter++){
                    if(i==iter-1) jp=(jp+1)%4;
                    for(int j=0;j<4;j++){
                        answer[x[j]][y[j]]=counter;
                        x[j]+=dx[(j+jp)%4];
                        y[j]+=dy[(j+jp)%4];
                    }
                }
            }
            answer[n/2][n/2]=counter;
        }
    }
    else{
        if(n%2==0){
            int x[4]={0,0,n-1,n-1};
            int y[4]={0,n-1,n-1,0};
            for(int iter=n-1, jp=0;iter>0;iter-=2){
                for(int i=0;i<iter;i++,counter++){
                    if(i==iter-1) jp=(jp+3)%4;
                    for(int j=0;j<4;j++){
                        answer[x[j]][y[j]]=counter;
                        x[j]+=dx[(j+jp+1)%4];
                        y[j]+=dy[(j+jp+1)%4];
                    }
                }
            }
        }
        else{
            int x[4]={0,0,n-1,n-1};
            int y[4]={0,n-1,n-1,0};
            for(int iter=n-1, jp=0;iter>0;iter-=2){
                for(int i=0;i<iter;i++,counter++){
                    if(i==iter-1) jp=(jp+3)%4;
                    for(int j=0;j<4;j++){
                        answer[x[j]][y[j]]=counter;
                        x[j]+=dx[(j+jp+1)%4];
                        y[j]+=dy[(j+jp+1)%4];
                    }
                }
            }
            answer[n/2][n/2]=counter;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }
    return answer;
}
int main(){
    solution(5,false);
}