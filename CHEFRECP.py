#souvikban
t=int(input())
for test in range(t):
	n=int(input())
	ls=list(map(int,input().split()))
	#setls=list(et(ls))
	flag = True
	seen = dict()
	seenvalues = dict()
	counter = 0
	for i in range(1,n):
		if(ls[i] != ls[i-1]):
			if ls[i-1] in seen:
				flag = False
				break
			else:
				seen[ls[i-1]]= counter;
				if( counter in seenvalues):
					flag = False;
					break;
				else:
					seenvalues[counter]=1;
			
				counter=0
		else:
			counter+=1
	if(ls[n-1] in seen ):
		flag = False
	else:
		if(counter in seenvalues):
			flag = False
	# print(seen)
	# print(seenvalues)
	if(flag ):
		print("YES")
	else:
		print("NO")
	


