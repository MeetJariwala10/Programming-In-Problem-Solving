# Q-75 --> A python program to overload greater than (>) operator to make it act on class objects.

class pythonBook:
  def __init__(self,pages):
    self.pages=pages
  def __gt__(self,other):
    return self.pages>other.pages
class cBook:
  def __init__(self,pages):
    self.pages=pages

b1=pythonBook(700)
b2=cBook(500)

if(b1>b2):
  print("Python has more pages")
else:
  print("C has more pages")

