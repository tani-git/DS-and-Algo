def reverse_array(a, start, end):
	while start >= end:
		return
	temp = a[start]
	a[start] = a[end]
	a[end] = temp

	reverse_array(a, start+1, end-1)
def print_array(a, n):
	for i in range(n):
		print(a[i], end = " ")



a = [1,2,3,4,6,7]
print_array(a, 6)
reverse_array(a, 0, 5)
print("\n")
print_array(a, 6)