n,k=input().split()
n,k=int(n),int(k)
counter=0
for i in range(n):
	n=int(input())
	if n%k==0:
		counter+=1
print(counter)