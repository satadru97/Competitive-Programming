# We have to find no of numbers between range (a,b) which has consecutive set bits.
# Hackerearth

n, q = map(int, input().split())
arr = list(map(int, input().split()))
for k in range(n):
	l, h = map(int, input().split())
	count = 0
	for i in range(l-1, h):
		if "11" in bin(arr[i]):
			count+=1
	print(count)