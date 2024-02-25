# Q-60 --> Write a Python function to find the roots of a quadratic equation
def root(a,b,c):
  d = b**2 - 4*a*c
  if d>=0:
    r1 = (-b + (d)**0.5)/2*a
    r2 = (-b - (d)**0.5)/2*a
    print("Roots are", r1,"and", r2)
  elif d<0:
    print("Complex roots")
a = int(input("Enter coefficient of x^2 :"))
b = int(input("Enter coefficient of x :"))
c = int(input("Enter value of constant :"))
root(a,b,c)


