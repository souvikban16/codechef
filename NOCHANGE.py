



for i in range(int(input())):
    n,p=input().split()
    n,p=int(n),int(p)
    d=list(map(int,input().split()))
    d.sort(reverse=True)
    c=[]
    cpos=[]
    flag=0

    D=[j for j in d if p%j!=0]
    if len(D)<=0:
        print("NO")
    else:
        for i in d:
               if p%i==0:
                   cpos.append(d.index(i))
                   d[d.index(i)]=0

        temp=p
        for i in range(len(d)):
            if(d[i]!=0):
                c.append(int(temp/d[i]))
                temp=p%d[i]
        for i in range(len(cpos)):
                c.insert(cpos[i],0)
        c[-1]+=1
        print("YES",*c)
