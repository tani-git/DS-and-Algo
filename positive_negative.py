def positive_negative(a, n):
	i = -1
	for j in range(n):
		if(a[j] < 0):
			i = i+1
			a[i], a[j] = a[j], a[i]

	pos = i+1
	start = 0
	while(pos < n and start < pos and a[start] < 0):
		a[pos], a[start] = a[start], a[pos]
		pos = pos+1
		start = start + 2
	

def print_array(a, n):	
	for i in range(n):
		print(a[i], end = " ")

a = [-1, 2, -3, 4, 5, 6, -7, 8, 9]
n = len(a)
positive_negative(a, n)
print_array(a, n)






