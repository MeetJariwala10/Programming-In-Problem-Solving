# Q-61 --> Write a Python function to evaluate factorial function using while loop.
def fact(n):
  while(n>=0):
    if n==0 or n==1:
      return 1
    else:
      return n*fact(n-1)

n = int(input("Enter number :"))
print("The factorial of", n,"is", fact(n))
