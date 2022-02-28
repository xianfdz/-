def  visit():
    with open('guest_book.txt','a') as file_0:
        while True:
            name=input('请输入您的姓名：')
            file.write(name + ' have a visit!' + '\n')
            print('Hello,' + name + '!')

print('why do you like python?')
with open('reason','a') as file_1:
    while True:
        reason=input()
        file_1.write(reason + '\n')
