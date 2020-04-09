t=int(input())

for test in range(t):
	n=int(input())
	flag=[]
	for i in range(n):
		flag.append(0)
	# print(flag)
	ans=[]
	subans=[]
	counter=0
	for i in range(2,n):
		if(flag[i]==0):
			counter=0
			for j in range(i,n):
				flag[j]=1
				subans.append(j)
				print(subans)
				j+=i
			for k in range(len(subans)):
				ans.append(subans[k])
	# print(ans)
			
