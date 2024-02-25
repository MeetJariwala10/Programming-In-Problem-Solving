# Q-58 --> Write a Python function to swap two numbers.
def swap(a,b):
  temp = a
  a = b
  b = temp
  return a,b

a = int(input("Enter number 1 :"))
b = int(input("Enter number 2 :"))
print("The numbers before swapping are %d and %d" %(a,b))
a,b = swap(a,b)
print("The numbers after swapping are %d and %d"%(a,b))
