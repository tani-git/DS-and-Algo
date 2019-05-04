def subarry_sum_indexes(a, n, sum):
	curr_sum = a[0]
	start = 0
	i = 1
	while i <= n:
		while curr_sum > sum and start < i-1:
			curr_sum = curr_sum - a[start]
			start += 1
		if curr_sum == sum:
			print ("Sum found between indexes")
			print ("%d and %d"%(start, i-1))
			return 1
		if i < n:
			curr_sum = curr_sum + a[i]
		i += 1
	print("no subarray found")
	return 0


ar = [15, 2, 4, 8, 9, 5, 10, 23]
sum = 23
subarry_sum_indexes(ar, len(ar), sum)
