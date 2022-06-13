import numpy as np
#1
a = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 0], float)
print(a)
#2
print('--------------------------------')
print(a[:1])
print(a[:2])
#3
print('--------------------------------')
b = np.array([[1, 2, 3], [4, 5, 6]], float)
print(b)
print(b.shape)
#4
print('--------------------------------')
print(2 in b)
print(0 in b)
#5
print('--------------------------------')
c = np.array(range(30), float)
c = c.reshape((3,10))
print(c)
#6
print('--------------------------------')
b = b.flatten()
c = c.flatten()
print(np.concatenate((a, b, c)))
#7
print('--------------------------------')
print(np.arange(4, 101, dtype=float))
#8
print('--------------------------------')
e = np.array(range(100), float)
e = e.reshape(10,10)
e.fill(0)
print(e)
e.fill(1)
print('-----')
print(e)
#9
print('--------------------------------')
f = np.arange(2, 100, dtype=int)
f.resize(25, 4)
f.shape
print(f)
#9
print('--------------------------------')
print(np.eye(15, k=7, dtype=float))