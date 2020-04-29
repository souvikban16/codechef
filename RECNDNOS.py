t=int(input())

for test in range(t):
	n=int(input())
	ls=list(map(int,input().split()))
	setls=list(set(ls))
	setls.sort()

	
	freq=[]
	ans=0
	skip=0
	for i in range(len(setls)):
		temp=0
		for j in range(n):
			if(skip==1):
				skip=0
				continue
			else:
				if(setls[i]==ls[j]):
					temp+=1
					if(j!=n-1):
						if(ls[j]==ls[j+1]):
							skip=1
		freq.append(temp)

	m=max(freq)
	for i in range(len(freq)):
		if m==freq[i]:
			ans=setls[i]
			break
			
	print(ans)
				
		
		