
for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    s=0
    a.sort()
    b.sort()
    for i in range(len(a)):
        s+=min(a[i],b[i])

    print(s)
    
