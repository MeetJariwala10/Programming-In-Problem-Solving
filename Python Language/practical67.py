# 67 --->  A python program to accept two matrices and find their product. 

import numpy as np
print("Enter number of rows and columns for matrix 1 :")
row1,col1 = [int(x) for x in input("\n").split()]
print("Enter number of rows and columns for matrix 2 :")
row2,col2 = [int(x) for x in input("\n").split()]

if col1 != row2:
    print("Matrix multiplication is not possible !")
else:
    str1 = [int(x) for x in input("Enter elements for matrix 1: ").split()]
    str2 = [int(x) for x in input("Enter elements for matrix 2: ").split()]
mat1 = np.reshape(np.matrix(str1), (row1,col1))
mat2 = np.reshape(np.matrix(str2), (row2,col2))
matprod = mat1*mat2
print("Given matrices are : \n", mat1, mat2)
print("Product is : \n", matprod)