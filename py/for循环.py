#比萨
my_pizzas=['number1 pizza','number2 pizza','number3 pizza']
for pizza in my_pizzas:
    print('I like ' + pizza + '!')
print('I ready like pizza!')

friend_pizzas=my_pizzas[:]
my_pizzas.append('number5 pizza')
friend_pizzas.append('number4 pizza')
for pizza in my_pizzas:
    print(pizza)
for pizza in friend_pizzas:
    print(pizza)


#动物
animals=['dogs','robbut','cat']
for animal in animals:
    print('A ' + animal + ' would like to make a great pet')
print('Any of these would make a greak pet!')

#数值列表range()
num=list(range(1,10))
print(num)
num2=list(range(1,11,2))
print(num2)
#squares=[]
#for value in range(1,11):
#    squares.append(value**2)
#列表解析
squares=[value**2 for value in range(1,11)]
#列表解析
print(max(squares))
print(min(squares))
print(sum(squares))
print(squares)

#4.3
for num in range(1,21):
    print(num)
#4.4
#number=[value for value in range(1,1000001)]
#print(number)
#print(min(number))
#print(max(number))
#print(sum(number))

#4.7
num=[value for value in range(1,21,2)]
for value in num:
    print(value)

#4.8
num=[value for value in range(3,31,3)]
for value in num:
    print(value)
#4.9
lifang=[value**3 for value in range(1,11) ]
for value in lifang:
    print(value)

#4.10
foods=['apple','banana','juzi','huluobo','li']
print(foods[0:3])
print(foods[1:4])
print(foods[-3:])
