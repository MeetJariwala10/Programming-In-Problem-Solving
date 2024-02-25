# Q-74 --> A python program to implement multiple inheritance using two base classes.

class A:
  def A(self):
    print("This is class A")
class B:
  def B(self):
    print("This is class B")
class C(A,B):
  def C(self):
    print("This is class C which inherits features of both classes A and B")

o = C()
o.A()
o.B()
o.C()

