'''
toweOfHanoi(N, R1, R2, R3)
N = Number of Discs
R1 = Origin Rod
R2 = Auxiliary Rod
R3 = Destiny Rod
'''
def towerOfHanoi(N, A, C, B): 
	if(N>=1):
		towerOfHanoi(N-1,A,B,C)
		print(A,C)
		towerOfHanoi(N-1,B,C,A)

n= int(input())
print(pow(2,n)-1)
towerOfHanoi(n,1,3,2)	

