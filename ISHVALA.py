t=int(input())
for i in range(t):
    
    n,m=input().split()
    m=int(m); n=int(n)
    X,Y,s=input().split()
    X=int(X); Y=int(Y); s=int(s)
    x1=[]; y1=[]
    if X>0 or Y>0:
        x1=list(map(int,input().split()))
        y1=list(map(int,input().split()))
    

    
    xarea=[];yarea=[]
    counter=0
    
    for j in range(0,m):
        if (j+1) in y1:
            
            xarea.append(counter)
            counter=0
            
        else:
            counter+=1
    xarea.append(counter)
    counter=0
    
    for l in range(0,n):
        if (l+1) in x1:
            yarea.append(counter)
            counter=0           

            
        else:
            counter+=1
    yarea.append(counter)

    total=0
    for x in xarea:
        for y in yarea:
            total=(x//s)*(y//s)+total
    
    print(total)