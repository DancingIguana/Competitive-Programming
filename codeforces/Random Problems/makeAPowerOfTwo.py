t = int(input())
powers = []
i = 0
while(pow(2,i) < 100000000000):
	powers.append(str(pow(2,i)))
	#print(powers[i])
	i+=1
 
i=0
testCases = 0
while(testCases <t):
	flag2=False
	distances = []
	n= str(input())
	if n in powers:
		print(0)
		flag2 = True
	for it in range(len(powers)):
		dis = 0
		j = 0
		flag = False
		for i in range(len(n)):
			if(j > len(powers[it])-1):
				flag = True
				dis += 1
			if flag == False:
				if(str(n[i]) == str(powers[it][j])):
					j += 1
				else:
					dis += 1
		distances.append(dis + len(powers[it])-j)
 	
	if(flag2 == False):
		print(min(distances))

	testCases += 1
