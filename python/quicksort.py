

def partition(a, start, end):
    pivot = a[end]
    pi = start

    for i in range(start,end):
        if a[i]<= pivot:
            a[i],a[pi] = a[pi],a[i]
            pi = pi +1

    a[pi],a[end] = a[end], a[pi]
    return pi

def quicksort(a, start, end):
    if (start < end):
        pi = partition(a,start, end)
        quicksort(a,start, pi-1)
        quicksort(a,pi+1, end)


a = [10,7,2,3,1,6,4]
n = len(a)
quicksort (a, 0, n-1)

print (a)
