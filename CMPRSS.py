for t in range(int(input())):
	a=int(input())
	n=list(map(int,input().split()))
	s=''
	index=0
	subsets=[]
	a,b=0,0
	for i in range(len(n)-1):
		if n[i]+1==n[i+1]:
			k=0
			while n[i]+k==n[i+k] and k<len(n):
				subsets.append(n[i])
				k+=1
	print(subsets)
