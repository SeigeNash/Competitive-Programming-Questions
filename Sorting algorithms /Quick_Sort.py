def quick(arr, begin, pivot):
 
    p = begin 
    q = begin 

    while( p < pivot ):
        if( arr[p] > arr[pivot] ):
            # do nothing 
            p += 1

        elif ( arr[p] < arr[pivot] ):
            # swap p and q 
            arr[p], arr[q] = arr[q], arr[p]
            p += 1
            q += 1

        # loop breaks when p == pivot 

        swap = arr[pivot]
        arr[pivot] = arr[q]
        arr[q] = swap 

        # perform partition 




def main():
    arr = [30, 80, 10, 90, 40]

    quick(arr, 0, len(arr) - 1)
    print(arr)
    


if __name__=="__main__":
    main()



