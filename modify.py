def modify(a, n):
	if n<=1:
		return

	prev = a[0]
	a[0] = a[0] * a[1]

	for i in range(1,n-1):
		curr = a[i]

		a[i] = prev * a[i+1]

		prev = curr

	a[n-1] = prev * a[n-1]


def print_list(a):
	for i in range(0, len(a)):
		print(a[i])

a = [2,3,4,5,6]
modify(a, len(a))
print("modified list is")
print_list(a)
