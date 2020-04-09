test=int(input())

for t in range(test):
	s=input()
	n=len(s)
	k,x=input().split()
	k,x=int(k),int(x)
	ss=set(s)
	ss=list(ss)
	counter=0
	# ~ print(ss)
	ls=[]
	penal=0
	for i in range(n):
		ls=s[:i]
		# ~ print(ls)
		# ~ print(s[i])
		if ls.count(s[i]) > x-1:
			if(k>0):
				k-=1;
				penal+=1				
				continue
			else:
				# ~ print("stop")
				break
		counter+=1
	# ~ print(ls)
	print(len(ls)-penal)
				
		
			
			
		
	
