# Q-59 --> Write a Python function to find the greatest of 3 numbers
def max(a,b,c):
  if a>b and a>c:
    print(a,"is greatest number")
  elif b>c:
    print(b,"is greatest number")
  else:
    print(c,"is greatest number")

n1 = int(input("Enter 1st number : "))
n2 = int(input("Enter 2nd number : "))   
n3 = int(input("Enter 3rd number : "))   
max(n1,n2,n3)
