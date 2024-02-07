# Q-57(c) ---> Draw following patterns using nested loops.
#   *
#  * *
# * * * 

n = int(input("Enter number of lines : "))

for i in range(1,n+1):
    for j in range(n, 0, -1):
        if(j>i):
            print(" ", end='')
        else:
            print("* ", end='')
    print()