
tcases=int(input())

for t in range(tcases) :

    test=[]
    row=int(input())
    for i in range(row):
        subtest=list(map(int,input().split()))
        test.append(subtest)
##    test.pop(0)


    r=len(test)
    i=r-2

    while (i>=0):

        for j in range(len(test[i])):
            if test[i+1][j] > test[i+1][j+1] :
                test[i][j]+=test[i+1][j]
            else:
                test[i][j]+=test[i+1][j+1]


        i-=1
    print(test[0][0])
