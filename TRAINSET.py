t=int(input())

while(t!=0):
	n=int(input())
	ls=[]
	for i in range(n):
		ls.append(list(input()))
		
	arr=[]
	for i in range(n):
		arr.append(int (ls[i][-1]))
	# ~ print(arr)
	ones=arr.count(1)
	zeroes=arr.count(0)
	ans=max(ones,zeroes)
	if(ans==ones):
		print(ans)
	else:
		
		if(ans%2==0):
			print(ans)
		else:
			print(ans+1)
	t-=1
