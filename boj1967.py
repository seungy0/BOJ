from sys import stdin
input = stdin.readline

n=int(input())

graph = [[] for _ in range(n+1)]

for i in range(n-1):
    a,b,c=map(int,input().split())
    graph[a].append((b,c))

dist=[0 for _ in range(n+1)]
def dfs(start, end, dis):
    
    