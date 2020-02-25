for t in range(int(input())):
	n=int(input())
	ls=list(map(int,input().split()))
	s=''

	counter=1
	start=ls[0]
	if n==1:
		print(ls[0])
	else:

		for i in range(1,n-1):
			if start+counter==ls[i]:
				counter+=1
			else:
				if counter==1:
					s+=','+str(ls[i])

				elif counter==2:
					s+=','+str(ls[i-1])+','+str(ls[i])

				else:
					s+='...'+str(ls[i-1])+','+str(ls[i])

				counter=1
				start=ls[i]
		s=str(ls[0])+s+','+str(ls[-1])
		print(s)