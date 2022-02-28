#9-1 餐馆 ：创建一个名为 Restaurant 的类，其方法 __init__() 设置两个属性： restaurant_name 和 cuisine_type 。创建一个名
#为 describe_restaurant() 的方法和一个名为 open_restaurant() 的方法，其中前者打印前述两项信息，而后者打印一条消息，指出餐馆正在营业。
#根据这个类创建一个名为 restaurant 的实例，分别打印其两个属性，再调用前述两个方法。
#9-2 三家餐馆 ：根据你为完成练习 9-1 而编写的类创建三个实例，并对每个实例调用方法 describe_restaurant() 。

class Restaurant: 
         def __init__(self,restaurant_name,cuisine_type): 
             self.restaurant_name=restaurant_name 
             self.cuisine_type=cuisine_type 
             self.number_served=0
         def descripe_restaurant(self): 
             print('The restaurant`name is ' + self.restaurant_name) 
             print('The cuisine name is ' + self.cuisine_type) 
              
         def open_restaurant(self): 
             print(self.restaurant_name + ' is opening!')
            
         def set_number_served(self,number_served):
             self.number_served=number_served
         def increment_number_served(self,increment_number_served):
             self.number_served+=increment_number_served

#restaurant_0=Restaurant('dong yan', str(6))
#restaurant_1=Restaurant('dong xin ran', str(5))
#restaurant_2=Restaurant('dong', str(7))
#restaurant_0.open_restaurant()
#restaurant_1.open_restaurant()
#restaurant_2.open_restaurant()
restaurant_4=Restaurant('dong yan',str(7))
restaurant_4.set_number_served(6)
print(restaurant_4.number_served)
restaurant_4.increment_number_served(2)
print(restaurant_4.number_served)