test=int(input())

for t in range(test):
	a,b=input().split();
	a,b=int(a),int(b);
	lsa=list(map(int,str(a)))
	lsb=list(map(int,str(b)))
	if(len(lsa)==len(lsb)):
		if(len(lsa)==1):
			print(a+b)
		else:
				
			large=max(a,b)
			small=min(a,b)
			c,d=0,0
			if(int(small/10)<int(large%10)):
				c=int(large/10)*10+int(small/10)
				d=int(large%10)*10+int (small%10)
				print(c+d)
			else:
				print(a+b)
		

			
	else:
		large=max(a,b)
		small=min(a,b)
		if(small>int(large/10)):
			c=small*10+int(large%10)
			d=int(large/10)
			print(c+d)
		else:
			print(a+b)
		
	
	
