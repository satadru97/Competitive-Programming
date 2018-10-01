#Techgig VCL Coding 1

def main():
	n = int(input())
	a = []
	sum = 0
	for i in range(n):
		x = int(input())
		a.append(x)
	for i in range(n):
		sum+=(a[i]**2)*(i+1)
		for j in range(i):
			sum+=a[i]*a[j]*(j+1)
	print(sum%(10**9+7))

main()