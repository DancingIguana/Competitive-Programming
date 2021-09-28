n = int(input())
gray = ["0" if i < pow(2,n-1) else "1" for i in range(pow(2,n))]
#print(gray)

for column in range(2,n+1):
	index = 0
	for i in range(pow(2,n-column)):
		gray[index] = gray[index] + "0"
		index += 1
	#print(gray, index)	
	while (index < (pow(2,n) - pow(2,n-column))):
		#print("Entered", index,"<",pow(2,n-1))
		for i in range(pow(2,n-column+1)):

			gray[index] = gray[index] + "1"
			index += 1
		if index >= pow(2,n) - pow(2,n-column):
			break
		
		for i in range(pow(2,n-column+1)):
			gray[index] = gray[index] + "0"
			index += 1
	
	#print(index)
	for i in range(pow(2,n-column)):
		gray[index] = gray[index] + "0"
		index += 1
	#print("columns = ", gray)
for i in gray:
	print(i)
