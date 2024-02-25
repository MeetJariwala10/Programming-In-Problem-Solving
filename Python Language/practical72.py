# Q-72 ---> A python program to convert the elements of two lists into key-value pairs of a dictionary

n = int(input("Enter size :"))
l1=[]
l2=[]
for i in range(n):
    ele1 = input("Enter state : ")
    l1.append(ele1)
    ele2 = input("Enter capital : ")
    l2.append(ele2)
print("List is", l1,l2)
dict = {}
for i in range(n):
    dict.update({l1[i]:l2[i]})
print("The dictionary is",dict)
