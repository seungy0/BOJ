import sys
input=sys.stdin.readline

T=int(input())
for i in range(T):
    n=int(input())
    tmp=list()
    tmp.append(list(map(int, input().split())))
    tmp.append(list(map(int, input().split())))
    dp=[[0 for _ in range(n)] for _ in range(2)]
    if n==1:
        print(max(tmp[0][0],tmp[1][0]))
    elif n==2:
        print(max(tmp[0][0]+tmp[1][1],tmp[0][1]+tmp[1][0]))
    else:
        dp[0][0]=tmp[0][0]
        dp[1][0]=tmp[1][0]
        dp[0][1]=tmp[1][0]+tmp[0][1]
        dp[1][1]=tmp[0][0]+tmp[1][1]
        for i in range(2,n):
            dp[0][i]=max(dp[1][i-2],dp[1][i-1])+tmp[0][i]
            dp[1][i]=max(dp[0][i-2],dp[0][i-1])+tmp[1][i]
        print(max(dp[0][n-1],dp[1][n-1]))