for t in range(int(input())):
    n=int(input())
    s=input()
    a=[]
    b=[]
    ascore=0
    bscore=0
    for i in range(len(s)):
        if i%2==0:
            if s[i]=='1':
                ascore+=1
            
        else:
            if s[i]=='1':
                bscore+=1
        if (ascore>=n-bscore):
            break
        elif(bscore>=n-ascore):
            break
    if(i%2==0):
        print(i)
    else:
        print(i+1)
            

 

