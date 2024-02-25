# Q-71 ---> A python program to sort a tuple with nested tuples

#t1 = ((1, 'meet', 'maths', 100),(2, 'harsh', 'chemistry', 90), (3, 'hello', 'ES', 10), (4, 'Hi', 'egd', 99))

t1 = eval(input("enter"))
print(t1)   

sort_key = int(input("Enter key :"))
sorted(t1, key = lambda x : x[sort_key])