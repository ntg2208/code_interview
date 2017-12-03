
def bubblesort (a, n):
    for i in range(n):
        for j in range(n):
            if a[i]<= a[j]:
                a[i], a[j] = a[j], a[i]

a = [4,2,3,1,7,4,3,12]
n = len(a)
bubblesort(a,n)
print (a)