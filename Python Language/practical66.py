# 66--->  A python program to search for the position of an element in an array using index () method. 

import array as a
l1 = [int(x) for x in input("Enter array  : ").split()]
myArray = a.array('i',l1)
print(myArray)
n = int(input("Enter position :"))
print("The value is", l1.index(n))
