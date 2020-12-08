li = [1,2,3,4,5]
len = 5
sh = int(input("enter shift "))
sh %= len
temp = li[len-1]
swhold = 0
indx = len-1

for i in range(len):
    indx -= sh
    if(indx < 0):
        indx = len + indx 
    swhold = li[indx]
    li[indx] = temp
    temp = swhold
print(li)