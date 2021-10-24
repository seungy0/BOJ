import sys
from bisect import bisect_left

input=sys.stdin.readline

n=int(input())

data=list(map(int,input().split()))
arr=[data[0]]
ind=[0]*(n)
maxsize=0

for i in range(n):
    if arr[-1]<data[i]:
        arr.append(data[i])
        ind[i]=len(arr)-1
        maxsize=ind[i]
    else:
        ind[i]=bisect_left(arr,data[i])
        arr[ind[i]]=data[i]
print(maxsize+1)
ans=[]
for i in range(n-1,-1,-1):
    if ind[i]==maxsize:
        ans.append(data[i])
        maxsize-=1
ans.reverse()
print(*ans)
