
def isprime(n):
	if n<=1:
		return False
	if(n==2 or n==3):
		return True
	if(n%2==0 or n%3==0):
		return False
	i=5
	while(i**2 < n):
		# print(i)
		if(n%i==0 or n%(i+2)==0):
			return False
		i+=6
	return True

t=int(input())
for test in range(t):
	x,k=input().split()
	x=int(x)#no of divisors.should be more
	k=int(k)#no of primes. should be less
	if(k>x):
		print(0)
	else:
		if(x==k):
			print(0)
		elif(not isprime(x)):
			print(1)
		else:
			print(0)
				
