n,m=map(int,input().split())
pascal=[[]for _ in range(n+1)]
pascal[0].append(1)
for i in range(1,n+1):
    pascal[i].append(1)
    for j in range(1,i):
        pascal[i].append(pascal[i-1][j-1]+pascal[i-1][j])
    pascal[i].append(1)
print(pascal[n][m])