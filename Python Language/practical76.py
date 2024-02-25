# Q-76 --> A python program to show method overloading to find sum of two or three numbers.

class Addition:
  def __init__(self,a,b,c):
    self.a=a
    self.b=b
    self.c=c
  def __add__(self):
    return self.a + self.b + self.c

a1 = Addition(10,20.60,20)
print(a1.a + a1.b + a1.c)