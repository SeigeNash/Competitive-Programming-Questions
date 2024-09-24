def ascending(arr):
    for i in range(len(arr) - 1, 0, -1):
        for j in range(0, i):
            if ( arr[j] > arr[j+1]):
                arr[j+1] = arr[j+1] + arr[j]
                arr[j] = arr[j+1] - arr[j]
                arr[j+1] = arr[j+1] - arr[j]

def descending(arr):
    for i in range(len(arr) - 1, 0, -1):
        for j in range(0, i):
            if ( arr[j] < arr[j+1]):
                arr[j+1] = arr[j+1] + arr[j]
                arr[j] = arr[j+1] - arr[j]
                arr[j+1] = arr[j+1] - arr[j]



arr = [70, 40, 50, 30, 20, 60, 10]

descending(arr)

print(arr)


# do descending 