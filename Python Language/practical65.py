# 65---> A python program to sort the array elements using bubble sort technique
import array as a
n = int(input("Enter number of elements in array :"))
l1 = [int(x) for x in input("Enter array  : ").split()]
myArray = a.array('i',l1)
print(l1)
for i in range(n):
        for j in range(n-1-i):
            if myArray[j] > myArray[j+1]:
                temp = myArray[j]
                myArray[j] = myArray[j+1]
                myArray[j+1] = temp
print("Array after sorting is :", myArray)