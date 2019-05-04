def missing_number(a, n):
	total = (n+1)*(n+2)/2
	for i in range(0, n):
		total = total - a[i]
	return int(total)

a = [1,2,3,5,6,7]
print("Missing number is :", missing_number(a, len(a)))