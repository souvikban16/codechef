t=int(input())

for test in range(t):
	s=input()
	n=len(s)
	ls=s[1:]+s[0]
	rs=s[n-1]+s[:n-1]
	#print(ls,rs)
	
	if(ls==rs):
		print("YES")
	else:
		print("NO")
	