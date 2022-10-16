#Python program to perform the linear search
def linearsearch(lst, target):
    for i in range(len(lst)):
        if lst[i] == target:
            return i
    return -1


lst = [7,5,48,15,9,5,123,45,35]
item = int(input("Enter the item to be searched: "))
index = linearsearch(lst, item)
if index == -1:
    print("Item not found")
else:
    print("Item found at index: ", index)
