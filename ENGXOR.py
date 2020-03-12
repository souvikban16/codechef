from sys import stdin,stdout

def countsetbits(n):
    if n==0:
        return 0
    else:
        return 1+ countsetbits(n&(n-1))

test=int(stdin.readline())
for t in range(test):
    n,q=stdin.readline().split()
    n,q=int(n),int(q)

    ls=[int(a) for a in stdin.readline().split()]

    for i in range(q):
        e,o=0,0
        p=int(stdin.readline())
        for j in range(n):
            temp=int(countsetbits(p^ls[j]))
            if temp%2==0:
                e+=1
            else:
                o+=1
        stdout.write(str(e)+" "+str(o)+"\n")
