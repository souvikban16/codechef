for t in range(int(input())):
	n=int(input())
	ls=list(map(int,input().split()))
	ls.append(44)
	st=[]
	s=""

	counter=1
	start=ls[0]

	for i in range(1,n+1):
#		print("element=",ls[i]," counter=",counter," start=",start)
		if start+counter!=ls[i]:
#			print("does not comply")
			if counter!=1:
				st.append(ls[ls.index(start):i])
				if counter>2:
					s+=str(start)+"..."+str(ls[i-1])+","
				else:
					s+=str(start)+","+str(ls[i-1])+","
				start=ls[i]
#				print("start=",start)
				counter=1
				continue
			else:
				st.append(start)
				s+=","+str(start)
				start=ls[i]				
				counter=1

		counter+=1
#	print(st)
	print(s)