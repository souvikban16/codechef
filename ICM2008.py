def max(x,y):
    if x>y:
        return x,y
    else:
        return y,x



for t in range(int(input())):
    a,b,c,d=input().split()
    a,b,c,d=int(a),int(b),int(c),int(d)
    d,c=max(c,d)
    t=int((a-b)/(c-d))
    tdash=(a-b)/(c-d)
    if t.isInteger():
        print("YES")
    else:
        print("NO")
