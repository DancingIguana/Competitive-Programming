word = str(input())
counter = dict()
flag = False
flag2 = False

for letter in word:
	if letter not in counter:
		counter[letter] = 1
	else:
		counter[letter] += 1

for letter in counter:
	if(counter[letter] % 2 != 0 and flag2 == False):
		flag2 = True
		aux = letter
		continue

	if(counter[letter] % 2 != 0 and flag2 == True):
		print("NO SOLUTION")
		flag = True
		break

#print(counter)

palindrome = ""
if flag == False:
	for letter in counter:
		for i in range(int(counter[letter]/2)):
			palindrome = palindrome + letter

if(flag2 == True and flag == False):
	print(palindrome + aux  + palindrome[::-1])
elif(flag == False and flag2 == False):
	print(palindrome + palindrome[::-1])

