for t in range(int(input())):

    n,m=input().split()
    n,m=int(n),int(m)

    f=list(map(int,input().split()))
    p=list(map(int,input().split()))

    price=[]
    fset=set(f)
    for i in fset:
        pricetemp=0
        for j in range(n):
            if f[j]==i:
                pricetemp=pricetemp+p[j]
        price.append(pricetemp)

    print(min(price))
