for t in range(int(input())):
    n,k=input().split()
    n,k=int(n),int(k)

    c=list(input().split())
    for i in range(k):
        if c[-1]=='H':
            for j in range(len(c)):
                if c[j]=='T':
                    c[j]='H'
                elif c[j]=='H':
                    c[j]='T'
        c.pop(-1)
    print(c.count('H'))
