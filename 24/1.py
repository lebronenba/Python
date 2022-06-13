import numpy as np
#1
a = np.zeros(10)
print(a)
#2
print('----------------------')
a.fill(4.6)
print(a)
#3
print('----------------------')
b = np.arange(50, 1051, 50, dtype=float)
print(b)
#4
print('----------------------')
print(b[::-1])
#4
print('----------------------')
b = np.arange(50, 1051, 50, dtype=float)
#5
e = np.arange(200, 400, 1, dtype=float)
e = e.reshape(20,10)
print(e)
#6
print('----------------------')
print(np.ones((30,30), dtype=float))
#7
print('----------------------')
print(np.zeros((5,5,5), dtype=float))
#8
print('----------------------')
a = int(input("a: "))
b = int(input("b: "))
c = np.ones((a,b))
c[1:-1,1:-1] = 0
print(c)
#9
print('----------------------')
d = np.zeros((a,b), dtype=int)
d[1::2,::2] = 1
d[::2,1::2] = 1
print(d)