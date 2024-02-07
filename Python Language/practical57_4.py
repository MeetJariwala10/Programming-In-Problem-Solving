# Q-57(c) ---> Draw following patterns using nested loops.
#     1
#   2 2
# 3 3 3 

n = int(input("Enter number of lines : "))

for i in range(1,n+1):
    for j in range(n, 0, -1):
        if(j>i):
            print(" ", end='')
        else:
            print(i, end='')
    print()