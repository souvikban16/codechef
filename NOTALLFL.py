for t in range(int(input())):
    n,k=input().split()
    n,k=int(n),int(k)
    cakes=list(map(int,input().split()))
    max=1#1
    flag=0
    i=n
    while(i+1>2 and flag==0):#2
        counter=0
        for j in range(n-(i-1)):
            temp=len(set(cakes[counter:counter+i]))
            if(temp<k):
                max=len(cakes[counter:counter+i])
                flag=1
            counter+=1
        if flag==1:
            break
        i-=1
    print(max)
