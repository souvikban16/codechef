for t in range(int(input())):
    n=int(input())
    tax=0
    final=0
    if n<=250000:
        print(n)
    elif n>=250001 and n<=500000:
        tax=0.05
        final=n-n*tax
        print(int(final))
    elif n>=500001 and n<=750000:
        tax=0.1
        a=0.05*(250000)
        b=tax*(n-500000)
        final=n-a-b
        print(int(final))
    elif n>=750001 and n<=1000000:
        tax=0.15
        a=0.05*(250000)+0.1*(250000)
        b=tax*(n-750000)
        final=n-a-b
        print(int(final))
    elif n>=1000001 and n<=1250000:
        tax=0.2
        a=0.05*(250000)+0.1*(250000)+0.15*(250000)
        b=tax*(n-1000000)
        final=n-a-b
        print(int(final))
    elif n>=1250001 and n<=1500000:
        tax=0.25
        a=0.05*(250000)+0.1*(250000)+0.15*(250000)+0.20*(250000)
        b=tax*(n-1250001)
        final=n-a-b
        print(int(final))
    elif n>=1500001:
        tax=0.30
        a=0.05*(250000)+0.1*(250000)+0.15*(250000)+0.20*(250000)+0.25*(250000)
        b=tax*(n-1500001)
        final=n-a-b
        print(int(final))
    
    
    
    
    