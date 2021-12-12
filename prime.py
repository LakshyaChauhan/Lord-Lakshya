x=int(input("Enter Number:--\n"));
y=int(x/2)
for a in range(1,x):
for b in range(2,a):
	if a%b==0:
		print("Number is not prime")
	break
	else:
		print("Number is  Prime")
		