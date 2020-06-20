#souvikban i am sooo tired!!!
t=int(input())
for test in range(t):
	m,n=input().split()
	m,n=int(m),int(n)
	
	ls=[]
	for i in range(m):
		subls=list(map(int,input().split()))
		ls.append(subls)
	print(ls)
	frq=dict()
	odds=dict()
	for i in range(m):
		for j in range(n):
			frq[ls[i][j]]=frq.get(ls[i][j],0)+1
		
	print(frq)
	flag = True;
	if(n%2==0):
		for i in frq:
			if(frq[i] % 2 == 0):
				continue
			else:
				flag = False
				break
	else:
		for i in frq:
			counter=0;
			if(frq[i] % 2 != 0):
				counter+=1
				odds[i]=frq[i]
			if(counter!=n):
				flag = False
				break
	
	if(not flag):
		print(-1)
	else:
		# if(n%2==0):
			# for i in range(m):
				# for i in range(
		print(1)
			
	
	



