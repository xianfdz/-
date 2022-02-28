#9-3 用户 ：创建一个名为 User 的类，其中包含属性 first_name 和 last_name ，还有用户简介通常会存储的其他几个属性。在类 User 中定义一个名
#为 describe_user() 的方法，它打印用户信息摘要；再定义一个名为 greet_user() 的方法，它向用户发出个性化的问候。
#创建多个表示不同用户的实例，并对每个实例都调用上述两个方法。
class User: 
         def __init__(self,first_name,last_name): 
             self.first_name=first_name 
             self.last_name=last_name 
             self.login_attempts=0
         def describe_user(self): 
             print('The user`s name is ' + self.first_name.title() + ' ' + self.last_name.title(
             ) ) 
         def greet_user(self): 
             print('Hello, Mr.' +  self.first_name.title() + ' what can I do for you?' ) 
         def increment_login_attempts(self):
             self.login_attempts+=1
         def reset_login_attempts(self):
             self.login_attempts=0

                                                    
user_1=User('dong','yan')                                                                  

#user_2=User('dong','xin ran')                                                              

#user_3=User('dong','zhi guo')
#user_1.describe_user() 
#user_2.describe_user() 
#user_3.describe_user() 

user_1.increment_login_attempts()
user_1.increment_login_attempts()
user_1.increment_login_attempts()
print(user_1.login_attempts)
user_1.reset_login_attempts()
print(user_1.login_attempts)

