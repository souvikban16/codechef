for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    sum=[]
    for i in range(n):
        l.append(l[0])
        l.pop(0)
        s=l[0]
        ss=0
        for j in l:
            if j>0:
                ss+=j
            else:
                if ss>s:
                    s=ss
                ss=0
        if ss>s:
            s=ss
        sum.append(s)
    temp=sum[-1]
    sum.pop(-1)
    sum.insert(0,temp)
    print(*sum)
