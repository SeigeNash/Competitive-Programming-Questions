def ascending(arr):
    for i in range(len(arr)):
        smallest = i
        for j in range(i, len(arr)):
            if( arr[j] < arr[smallest] ):
                smallest = j
        # swap i and smallest 
        arr[i], arr[smallest] = arr[smallest], arr[i]    
        


def descending(arr):
    for i in range(len(arr)):
        largest = i
        for j in range(i, len(arr)):
            if( arr[j] > arr[largest] ):
                largest = j
        # swap i and smallest 
        arr[i], arr[largest] = arr[largest], arr[i]    
   
arr = [70, 40, 50, 30, 20, 60, 10]

ascending(arr)

print(arr)

