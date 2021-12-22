n=int(input("Enter Number-:\n"));
c=0
for a in range(2,n+1):
    if n%a==0:
        c+=1
if n==1:
    print("One is neither prime nor composite")
else:
    if c==1:
        print("Prime Number")
    else:
        print("Not Prime")