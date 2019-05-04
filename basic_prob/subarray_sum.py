def Max_subarray_sum(a, size):
	max_so_far = 0
	max_ending_here = 0
	for i in range(0,size):
		max_ending_here = a[i] + max_ending_here

		if max_ending_here < 0:
			max_ending_here = 0

		elif (max_so_far < max_ending_here):
			max_so_far = max_ending_here

	return max_so_far
		

    



a = [-2, -3, 4, -1, -2, 1, 5, -3]
print("Maximum contigous sum is :", Max_subarray_sum(a, len(a)))