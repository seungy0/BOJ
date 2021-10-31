import math
def possible(crow):
    for i in range(crow):
        if col[i]==col[crow] or crow-i == abs(col[crow]-col[i]):
            return False
    return True

def nqueen(row):
    global ans
    global n
    if row==n:
        ans+=1
    else:
        for i in range(n):
            col[row]=i
            if possible(row):
                nqueen(row+1)


n=int(input())

ans=0
col=[0 for i in range(n)]
nqueen(0)
print(ans)

