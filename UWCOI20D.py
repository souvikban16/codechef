def stringtolist(s,n):
	l=[]
	for i in range(n):
		if s[i]=='1':
			l.append(1)
		else:
			l.append(0)
	return l


for t in range(int(input())):
	n=int(input())
	map=[]
	for i in range(n):
		map.append(stringtolist(input(),n))
	counter=0
	for i in range(0,n+1):
		for j in range(0,i+1):
			print("i=",str(i))
			print("j=",str(j))


