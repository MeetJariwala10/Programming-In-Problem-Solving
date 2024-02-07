# Q-55 --->  To display even numbers between X and Y. 

x = int(input("Enter x :"))
y = int(input("Enter y :"))

for i in range(x,y):
    if(i%2 == 0):
        print(i)
