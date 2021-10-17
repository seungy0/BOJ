import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**6)
n=int(input())
inorder=list(map(int,input().split()))
postorder=list(map(int,input().split()))
pos=[0 for _ in range(n+1)]
for i in range(n):
    pos[inorder[i]]=i
def preorder(ist,ie,ps,pe):
    if ist>ie or ps>pe:
        return
    root=postorder[pe]
    print(root, end=' ')
    left = pos[root] - ist
    right = ie - pos[root]
    preorder(ist, ist+left-1, ps, ps+left-1)
    preorder(ie-right+1, ie, pe-right, pe-1)
        

preorder(0,n-1,0,n-1)

