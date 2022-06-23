import itertools
answer=[]
goods=["abcdeabcd", "cdabe", "abce", "bcdeab"]
for g in range(len(goods)):
    for i in range(1,len(goods[g])+1):
        tmp=[]
        for j in [goods[g][p:p+i] for p in range(len(goods[g])-i+1)]:
            a=True
            for k in range(len(goods)):
                if k == g:
                    continue
                if str(j) in goods[k]:
                    a=False
                    break
            if a==True and not j in tmp:
                tmp.append(j)
        if tmp!=[]:
            tmp.sort()
            answer.append(" ".join(tmp))
            break
    if tmp==[]:
        answer.append("None")
print(answer)
print([[goods[1][p:p+1] for p in range(len(goods[1])-1+1)]])