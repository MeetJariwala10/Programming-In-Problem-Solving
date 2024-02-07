# Q-53 ---> Accept a number from keyboard and test whether the given number is even or odd.
n = int(input("Enter the number : "))
if(n%2 == 0):
    print("The number is even")
elif(n%2 != 0):
    print("The number is odd")   
else:
    print("Invalid number")