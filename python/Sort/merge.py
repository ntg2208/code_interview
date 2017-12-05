def merge(a, l, m, r):
	n1 = m - l +1
	n2 = r - m
	L = [0]*(n1)
	R = [0]*(n2)

	for i in range(0,n1):
		L[i] = a[l+i]
	for j in range(0,n2):
		R[j] = a[m+1+j]
	i = 0
	j = 0
	k = l

	while i<n1 and j<n2:
		if L[i] <= R[j]:
			a[k] = L[i]
			i+=1
		else:
			a[k] = R[j]
			j+=1
		k+=1

	while i<n1:
		a[k] = L[i]
		i+=1
		k+=1
	while j<n2:
		a[k] = R[j]
		j+=1
		k+=1

def mergesort(a, l, r):
	if l<r:
		m = (l+r)//2
		mergesort(a,l,m)
		mergesort(a,m+1,r)

		merge(a,l,m,r)

a = [12,3,5,6,2,0]
n = len(a)
mergesort(a,0,n-1)
print (a)