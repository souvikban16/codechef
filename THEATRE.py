total=0
while True:
    try:

        test=int(input())
        if test<0 or test>150:
            raise ValueError
        break
    except ValueError:
        pass


for t in range(test):
    while True:
        try:

            n=int(input())
            if n<0 or n>150:
                raise ValueError
            break
        except ValueError:
            pass

    table=[]
    for i in range(4):
        subtable=[]
        for j in range(4):
            subtable.append(0)

        table.append(subtable)
    for i in range(n):
        while True:
            try:

                n,t=input().split()
                assert (n!='A' or n!='B' or n!='C' or n!='D') and (t!='12' or t!='3' or t!='6' or t!='9')
            except AssertionError:
                pass
        t=int(t)
        m=0
        if n=='A':
            m=0
        elif n=='B':
            m=1
        elif n=='C':
            m=2
        elif n=='D':
            m=3

        if t==12:
            t=0
        elif t==3:
            t=1
        elif t==6:
            t=2
        elif t==9:
            t=3
        table[m][t]+=1
    
    table.sort(reverse=True)

    slots=[]
    for i in range(4):
        optimum=max(table[i])
        if optimum>0:
            slots.append(optimum)
        else:
            slots.append(0)
        optimum_index=table[i].index(optimum)
        for j in range(4):
            table[j].pop(optimum_index)
    
    slots.sort(reverse=True)
    sum=0
    counter=100
    for s in slots:
        if s>0:    
            sum+=s*counter
        else:
            sum-=100
        counter-=25
    print(sum)
    total+=sum
print(total)



    