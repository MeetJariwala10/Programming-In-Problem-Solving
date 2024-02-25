# Q-70 --->  A python program to know how many times an element occurred in the list.

n = int(input("Enter size : "))
l1 = []
for i in range(n):
    ele1 = int(input("Enter list :"))
    l1.append(ele1)
print("The list is : ", l1)
a = int(input("Count : "))
print("The count of", a,"is", l1.count(a))