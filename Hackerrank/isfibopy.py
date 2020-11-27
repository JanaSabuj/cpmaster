from math import *
t = int(input())

for i in range(t):
	n = int(input())
	a = int(sqrt(5*n*n+4))
	b = int(sqrt(5*n*n-4))

	if(a*a == 5*n**2 + 4 or b*b == 5*n**2-4):
		print("IsFibo")
	else:
		print("IsNotFibo")
