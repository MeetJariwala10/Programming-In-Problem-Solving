# mystr = "SCET is the best college"
# print(mystr[15::1])
# print(mystr[-10:-1:2])

# str1 = "Python Program"
# print(str1[1:10:1])
# print(str1[0:-1:2])

# dic = {'b':20,'a':35}
# print(dic['a'])
# print(dic.get('c',None))
# print(len(dic))
# print(dic.keys())

# def leapYear(year):
#     if (year%400==0) or (year%100!=0) and (year%4==0):
#         print(year, "is leap year")
#     else:
#         print("Not a leap year")

# n = int(input("Enter year : "))
# leapYear(n)

x = int(input("Enter x : "))
y = int(input("Enter y : "))
sum = 0 
for i in range(x,y):
    if i%2==0:
        sum = sum + i
print(sum)