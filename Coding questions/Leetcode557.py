s = "Let's take LeetCode contest"

myList = s.split()

count = 0

for i in myList:
    temp = ""
    for j in range(len(i) - 1, -1, -1):
        temp = temp + i[j]
    myList[count] = temp
    count += 1
        
    
myList =tuple( myList )
result = " ".join(myList)

print(result)

