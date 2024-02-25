# 64---. A python program that helps to know the effects of slicing operations on an array. 

import array as a 
l1 = [1,2,3,4,5]
a1 = a.array('i', l1)
print(a1)
print(a1[1:3])
print(a1[:5])
print(a1[2:])
print(a1[-3:])
print(a1[-4:-1])
print(a1[0::2])
