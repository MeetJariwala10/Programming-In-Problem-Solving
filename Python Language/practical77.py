# Q-77 --> Apython program to call super class constructor in the sub class using super ()

class Class():
  def __init__(self,x):
    print(x)
class SubClass(Class):
  def __init__(self,x):
    super().__init__(x)

x = [1, 2.9, 3.4, 4, 5]
a = SubClass(x)