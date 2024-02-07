def ispalindrome(s):
    return s == s[::-1]
s = "malayalam"
ans = ispalindrome(s)

if ans:
    print("Yes")
else:
    print("No")