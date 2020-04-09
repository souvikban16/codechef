t=1
for test in range(t):
	n=int(input())
	ls=[]
	for i in range(n):
		ls.append(int(input()))
	# ~ print(ls)
	ls.sort(reverse=True)
	# ~ print(ls)
	m=0
	for i in range(n):
		temp=ls[i]*(i+1)
		if m<temp:
			m=temp
	print(m)
