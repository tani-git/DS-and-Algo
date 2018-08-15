def string_rotation(str1):
	tmp = str1 + str1
	n = len(str1)
	for i in range(1,n+1):
		substring = tmp[i:]
		if(substring == str1):
			return i

a = "geeks"
res = string_rotation(a)
print(res)