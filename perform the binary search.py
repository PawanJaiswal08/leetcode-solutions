# Python program to perform  binary search
def binary_search(arr, target):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        if arr[mid] > target:
            high = mid - 1
        else:
            low = mid + 1
    return -1


arr = list(map(int,input().split()))
target = int(input("Enter the item to be searched: "))
result = binary_search(arr, target)
if result == -1:
    print("Item not found")
else:
    print("Item found at index: ", result)

