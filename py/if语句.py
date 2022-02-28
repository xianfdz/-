cars=['audi','bmw','subaru','toyota']
for car in cars:
    if car == 'bmw':
        print(car.upper())
    else:
        print(car.title())

car = 'audi'
if car in cars:
    print(car.title() + ' is here.')

a=3
if a>10 or a<6:
    print(a)
if a>2 and a<5:
    print(a)

#message = input("Tell me something, and I will repeat it back to you: ")
#print(message)

#5.2
s1='asd'
s2='Asd'
if s1==s2:
    print(True)
else :
    print(False)

if s1==s2.lower():
    print(True)
else :
    print(False)
