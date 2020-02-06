def listtoint(l):
    num=0
    for i in l:
        num=num*10+i
    return num


for t in range(int(input())):
    n=list(map(int,input()))
    disc=[]
    for i in range(len(n)):
        m=n[:]
        m.pop(i)
        disc.append(listtoint(m))

    print(min(disc))

