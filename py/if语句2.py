a=2
b=4
if a==b:
    print('a=b')
if a!=b:
    print('a!=b')
if a<=b :
    print('a<b')
if True :
    print('asd')
#5-3
alien_color = {'green','yellow','red'}
number1={'name':'bulang','color':'yellow'}
number2={'name':'bushi','color':'red'}
number3={'name':'bulake','color':'green'}
exo=[number1,number2,number3]
for number in exo :
    for namer,clour in number.items():
        if namer=='color':
            if clour=='green':
               print('you get 5 dian')
            else :
                print('you get 10 dian')

#5-6
ages=[1,3,5,13,24,56,78]
for age in ages:
    if age<2 :
        print('He is a little beibi')
    elif age<4:
        print('He is learnning to walk')
    elif age<13:
        print('He is a child')
    elif age<20:
        print('He is an agenger')
    elif age<65:
        print('He is a daren')
    elif age>=65:
        print('He is an old man')
    
#5-7
favourite_fruits=['apple','banana','li']
check=['xiguan','nangua','li','apple','putao']
for fruit in favourite_fruits:
    for check_fruit in check:
        if check_fruit==fruit:
            print('You really like ' + fruit )

#5-8
#names=['wang jun lei','dong yan','admin','admax','adsum']
names = []
if names:
    for name in names:
        if name == 'admin':
            print('Hello admin, would you like to see a status report?')
        else :
            print('Hello Eric, thank you for logging in again')
else:
    print('We need to find some users!')

#5-9
current_users=['wang jun lei','dong yan','asd']
new_users=['wang','dong','asd']

for user1 in current_users :
    for user2 in new_users : 
        
        if user1.title()==user2.title():
            a=True
            print('it has been zhanyong')
    if a:
        a=False
    else :
        print('ta wei bei li yong')
for n in range(1,10):
    if n==1:
        print(str(n)+'st')
    if n==2:
        print(str(n)+'nd')
    if n==3:
        print(str(n)+'rd')
    if n>3:
        print(str(n)+'th')