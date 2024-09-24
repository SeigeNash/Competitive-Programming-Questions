path = "RgbrBG"
smaller = [ 'r', 'g', 'b']
keys = ""
ans = ""

for i in path:
    if i in smaller:
        keys = keys + i
    else: 
        if i.lower() in keys:
            continue 
        else: 
            ans = "No"
            print(ans)
            break


if (ans != "No"):
    print("Yes")

