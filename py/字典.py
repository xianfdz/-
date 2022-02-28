#coding=gbk
import io
import sys
import urllib.request
sys.stdout=io.TextIOWrapper(sys.stdout.buffer,encoding='utf8')
res=urllib.request.urlopen('http://www.baidu.com')
htmlBytes=res.read()
print(htmlBytes.decode('utf-8'))



alien_0={'color':'green','points':5}
print(alien_0['color'])
print(alien_0['points'])

number1={'first_name':'dong','last_name':'yan','age':20,'city':'dezhou'}
number2={'first_name':'wang','last_name':'junlei','age':'19','city':'xian'}
xinxi=[number1,number2]
print(xinxi)

zidian={'dongyan':'7','dongxinran':'2'}
for key,value in zidian.items():
    print(key + ' like ' + value)

hanshu={'title':'?????????д???','upper':'????????д???','lower':'??????Сдд???','.sort()':'??????????????','sorted':'????????????????','.item()':'????????'}
for key,value in hanshu.items():
    print(key + ':' + '\n' + '\t' + value)