for t in range(int(input())):
 
    r=[]
    n,k=input().split()
    n,k=int(n),int(k)
    A=list(map(int,input().split()))
    for c in range(1,n+1):
        a=A[:]
        coins=0;
        for i in range(c):
            if a[i]%k!=0:
                coins=coins+a[i]%k
                a[i]=a[i]-a[i]%k
            if coins>0:
                for j in range(c,n):
                    if coins>0:
                        if a[j]%k!=0:
                            coins-=k*(int(a[j]/k)+1) - a[j]
                            a[j]=(int(a[j]/k)+1)*k
                    else:
                        break


        if coins>0:
            r.append(coins)
    print(min(r))
