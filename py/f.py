#ǰ���º�����ϰ
from os import lseek


fav=['chinese','english']
del fav[1]
print(fav[0].title())
print(fav[0].upper())
print(fav[0].lower())
fav.append('japan')
fav.insert(0,'tu er qi')
print(fav)
fav.sort()
print(fav)
fav.sort(reverse=True)
print(fav)
fav.reverse()
print(fav)
num=len(fav)
print(num)
fav.reverse()
print(sorted(fav))
print(fav)
fav.pop(1)
print(fav)
fav.remove('tu er qi')
print(fav)
