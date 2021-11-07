# 가장 긴 증가하는 부분 수열
from sys import stdin
from bisect import bisect_left
input = stdin.readline

n=int(input())

arr=list(map(int,input().split()))
ans=[arr[0]]
realanswer=1
for i in range(1,n):
    if ans[-1]<arr[i]:
        ans.append(arr[i])
        realanswer+=1
    else:
        ind=bisect_left(ans,arr[i])
        ans[ind]=arr[i]
print(realanswer)
