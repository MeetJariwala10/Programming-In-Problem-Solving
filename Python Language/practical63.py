# Q-63 --> Write a Python function to generate Fibonacci series till given number.

def fib(n):
  if n==0:
    return 0
  elif n==1:
    return 1
  else:
    return fib(n-1)+fib(n-2)
n = int(input("Enter number :"))
for i in range(n):
  print("The fibonacci series is : ", fib(i))