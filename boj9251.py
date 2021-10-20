# LCS
import sys
input=sys.stdin.readline

a=input().strip()
b=input().strip()
lcs=[[0 for _ in range(len(b)+1)] for _ in range(len(a)+1)]

for i in range(len(a)+1):
    for j in range(len(b)+1):
        if i!=0 and j!=0:
            if a[i-1]==b[j-1]:
                lcs[i][j]=lcs[i-1][j-1]+1
            else:
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1])
print(lcs[len(a)][len(b)])
        