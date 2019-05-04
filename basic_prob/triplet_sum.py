def triplet_sum(a, n, sum):
	a.sort()
	for i in range(0,n-2):
		j = i+1
		k = n-1
		while(j < k):

			if a[i] + a[j] +a[k] >= sum:
				k = k-1

			else:
				
				for x in range(j+1, k+1):
				    print(a[i],a[j],a[x])
				j = j+1


a = [5, 1, 3, 4, 7]
n = len(a)
sum = 12
triplet_sum(a, n, sum)
