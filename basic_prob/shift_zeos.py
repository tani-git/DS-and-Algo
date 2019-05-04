def shift_zeros(a, n):
	count = 0
	for i in range(n):
		if a[i] != 0:
			a[count] = a[i]
			count +=1
	while count < n:
		a[count] = 0
		count = count+1

a = [1,0,0,0,0,4,5,6,7,0,9]
n = len(a)
shift_zeros(a, n)
print("array after shifting all zeros")
for i in range(n):
	print(a[i], end = " ")