def rearrange(a, n):
	a.sort()
	p = 0
	q = n-1
	ans = [0] * n
	for i in range(n):
		if (i+1)%2 == 0:
			ans[i] = a[q]
			q = q-1
		else:
			ans[i] = a[p]
			p = p+1
    #print("rearranged values are")
	for j in range(n):
		print(ans[j], end = " ")


a = [1,3,2,2,5]
rearrange(a, len(a))

