# Q-57(a) ---> Draw following patterns using nested loops.
# *
# **
# *** 
n = int(input("Enter number of lines : "))

for i in range(1,n+1):
    for j in range(1,i+1):
        print("*", end='')
    print()