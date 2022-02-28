name=['dong yan','wang jun lei']
#print(name[-1])
print(name[0].title() + ' Happy New Year!')
print(name[1].title() + ' Happy New Year!')
names=['I want to ride a bike!','I want to walk!']

print(names[0])
print(names[1])

names.append('I want to run car!')
names.insert(1,'qwe')
print(names)
del names[2]
namess=names.pop()
namesss=names.pop(0)
names.remove('qwe')
print(names)
print(namess)
print(namesss)
