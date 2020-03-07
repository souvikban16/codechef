for t in range(int(input())):

    def binary(x):
        if x==1:
            return 1
        else:
            return int(x%2)+ 10*binary(int(x/2))


    n,q=input().split()
    n,q=int(n),int(q)

    a=list(map(int,input().split()))

    for i in range(q):
        qr=int(input())
        e,o=0,0

        for j in a:
            temp=(j^qr)
            print(bin(temp))

            if temp.count(1)%2==0:
                e+=1
            else:
                o+=1
        print(e,o)
