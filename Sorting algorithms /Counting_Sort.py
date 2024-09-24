arr = [70, 60, 70, 50, 70, 50, 50, 20, 70, 20, 20]

d = dict()         # this took space 

for i in arr:
    if i in d.keys():
        d[i] = d[i] + 1
    else:
        d[i] = 1

d = dict(sorted(d.items()))         # modifying the same dictionary to save space 

key_list = list(d.keys())             # this took some extra space
key = 0

for i in range(len(arr)):           # modifying the input array to save space
    curr = key_list[key]
    if ( d[curr] == 0 ):
        
        print(arr)
        key = key + 1
        curr = key_list[key]        # crucial step

    arr[i] = curr
    d[curr] = d[curr] - 1


print(arr)