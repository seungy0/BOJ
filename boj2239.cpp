#include <bits/stdc++.h>

using namespace std;
bool col[10][10]={false,};
bool row[10][10]={false,};
bool box[10][10]={false,};
int doku[10][10];
int answer[10][10];
int tmp[10][10];
void input(){
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            char tmp;
            cin >> tmp;
            doku[i][j]=tmp-'0';
            if(doku[i][j]!=0){
                col[j][doku[i][j]]=true;
                row[i][doku[i][j]]=true;
                box[(i-1)/3*3+(j-1)/3+1][doku[i][j]]=true;
            }
        }
    }
}
void backt(int x, int y){
    if(x==10 && y==1){
        for(int i =1; i<10; i++){
            for(int j =1;j<10;j++){
                cout << doku[i][j];
            }
            cout << "\n";
        }
        exit(0);
    }
    else if(doku[x][y]==0){
        for(int i =1; i<10; i++){
            if(col[y][i]==false&&row[x][i]==false&&box[(x-1)/3*3+(y-1)/3+1][i]==false){
                col[y][i]=true;
                row[x][i]=true;
                box[(x-1)/3*3+(y-1)/3+1][i]=true;
                doku[x][y]=i;
                if(y==9){
                    backt(x+1,1);
                }
                else{
                    backt(x,y+1);
                }
                doku[x][y]=0;
                col[y][i]=false;
                row[x][i]=false;
                box[(x-1)/3*3+(y-1)/3+1][i]=false;
            }
        }
    }
    else{
        if(y==9){
            backt(x+1,1);
        }
        else{
            backt(x,y+1);
        }
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    input();
    backt(1,1);
}