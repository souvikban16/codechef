for t in range(int(input())):
	n=int(input())
	ls=list(map(int,input().split()))
	evencounter=0
	for i in ls:
		if i%2==0:
			evencounter+=1
	print(evencounter*(n-evencounter))

