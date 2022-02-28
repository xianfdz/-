
#输出数字
print(520)
print(56.87)
#输出字符串
print('hello world')
#输出运算符的表达式
print(3+1)
#将数据输出文件中，注意1.盘符存在2.file=fp
fp=open('/home/xupt-fdz/py/text','a+')#a+文件不存在就创建，存在就追加
print('hello world',file=fp)
fp.close()
#不换行输出
print('hello','world','python')


