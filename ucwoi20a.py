for t in range(int(input())):
	n=int(input())
	if n!=0:
		arr=[]
		for i in range(n):
			arr.append(int(input()))
		arr.sort()
		print(arr[-1])