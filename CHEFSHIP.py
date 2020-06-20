#souvikban
t=int(input())
for test in range(t):
	s=input()
	n= len(s)
	x = 1;
	y = 1;
	m = int(n/2) 
	ans=0
	while(y < n/2):
		x= (m-y)
		#print(x,y)
		d= s[n-y:]
		c= s[n-2*y:n-y]
		a= s[:x]
		b= s[x:2*x]
		#print(a,b)
		#print(c,d)
		if(a==b and c==d):
			ans+=1
		y+=1
	print(ans)
	
		
		
		
		
		
		



