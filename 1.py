import numpy as np

n = int(input("请输入："))


A=[]
#n为矩阵的维数
for i in range(0,n):
	A.append(list(map(int,input().split())))
#A = A.type('float')
if(np.linalg.det(A)==0)
	print('矩阵不可逆')
else:
    inverse = np.linalg.inv(A)
    inverse = np.asarray(inverse,dtype='float')
    print('输出：',A)
    print('逆矩阵：',inverse)
