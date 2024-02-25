# Q-62 --> Write a Python function to test whether a given number is prime or not.

def prime(n):
  flag=0
  for i in range(2,n):
    if (n%i ==0):
      print(n,"is not prime")
      flag=1
      break
  if(flag==0):
    print(n,"is a prime number")

n = int(input("Enter number :"))
prime(n)