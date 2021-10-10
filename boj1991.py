def cir1(s):
    print(s, end='')
    for i in dic[s]:
        if i!='.':
            cir1(i)
def cir2(s):
    if dic[s][0]!='.':
        cir2(dic[s][0])
    print(s, end='')
    if dic[s][1]!='.':
        cir2(dic[s][1])
def cir3(s):
    for i in dic[s]:
        if i!='.':
            cir3(i)
    print(s, end='')
import sys

input = sys.stdin.readline

n=int(input())

dic={}

for _ in range(n):
    a,b,c=input().split()
    dic[a]=[b,c]

cir1('A')
print()
cir2('A')
print()
cir3('A')