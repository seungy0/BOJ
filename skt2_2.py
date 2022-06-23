from collections import deque
def solution(arr, processes):
    p=list(i.split() for i in processes)
    tc=0
    rtimes =[[] for _ in range(3000)]
    wtimes =[[] for _ in range(3000)]
    wwaits = deque([])
    rwaits = deque([])
    answer = []
    pc=0 #prosess counter
    # read t1 t2 A B
    # write t1 t2 A B C
    for i in range(3000):
        if pc<len(p) and i == int(p[pc][1]):
            if p[pc][0]=="write":
                print("time",i,p[pc])
                wwaits.append(p[pc])
            else:
                print("time",i,p[pc])
                rwaits.append(p[pc])
            pc+=1
        if wtimes[i]!=[]:
            tc+=1
            continue
        elif rtimes[i]!=[]:
            tc+=1
            if not wwaits:
                while rwaits:
                    tmp=rwaits.popleft()
                    for k in range(i,i+int(tmp[2])):
                        rtimes[k].append(tmp)
                    answer.append(("".join(arr[int(tmp[3]):int(tmp[4])+1])).strip())
        else:
            if wwaits:
                tmp=wwaits.popleft()
                for k in range(i,i+int(tmp[2])):
                    wtimes[k].append(tmp)
                for k in range(int(tmp[3]),int(tmp[4])+1):
                    arr[k]=tmp[5]
                tc+=1
            elif rwaits:
                while rwaits:
                    tmp=rwaits.popleft()
                    for k in range(i,i+int(tmp[2])):
                        rtimes[k].append(tmp)
                    answer.append("".join(arr[int(tmp[3]):int(tmp[4])+1]))
                tc+=1
    answer.append(str(tc))
    return answer







print(solution(["1", "2", "4", "3", "3", "4", "1", "5"],["read 1 3 1 2", "read 2 6 4 7", "write 4 3 3 5 2", "read 5 2 2 5", "write 6 1 3 3 9", "read 9 1 0 7"]))