import sys
from collections import deque

input=sys.stdin.readline

n,m=map(int,input().split())
maze=[]
for i in range(n):
    maze.append(list(map(int,list(input().strip()))))

path=[[[0,0] for _ in range(m)] for _ in range(n)]

dx=[0,0,1,-1]
dy=[1,-1,0,0]
path[0][0][1]=1
queue=deque()
queue.append([0,0,1])
while queue:
    a,b,c=queue.popleft()
    if a==n-1 and b==m-1:
        print(path[a][b][c])
        exit()
    for i in range(4):
        x=a+dx[i]
        y=b+dy[i]
        if  0<=x<n and 0<=y<m:
            if maze[x][y]==1 and c==1:
                path[x][y][0]=path[a][b][1]+1
                queue.append([x,y,0])
            elif maze[x][y]==0 and path[x][y][c]==0:
                path[x][y][c]=path[a][b][c]+1
                queue.append([x,y,c])
print(-1)
