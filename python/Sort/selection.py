def selection(a, n):
    for i in range(n-1):
        min_idx = i
        for j in range(i + 1, n):
            if (a[j] < a[min_idx]):
                min_idx = j
        a[i], a[min_idx] = a[min_idx], a[i]


a = [4, 2, 1, 7, 4, 3, 12]
n = len(a)
selection(a, n-1)
print(a)
