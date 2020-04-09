t=int(input())
for test in range(t):
	s=input()
	l=len(s)
	left=list(s[:int(l/2)])
	right=""
	if(l%2==0):
		right=list(s[int(l/2):l])
		# ~ print(s[int(l/2):l])
	else:
		right=list(s[int(l/2)+1:l])
		# ~ print(s[int(l/2)+1:l])
	left.sort();right.sort()
	# ~ print(left,right)
	flag=0
	for i in range(len(left)):
		if left[i]==right[i]:
			flag=1
		else:
			flag=0
			break
	if flag==1:
		print("YES")
	else:
		print("NO")
	
