# To take string from user and create dictionary with characters from given string as key and count each characters as its value

s1 = input("Enter string :")
dic = {}
for ele in s1:
    dic[ele] = dic.get(ele, 0)+1
print(dic)