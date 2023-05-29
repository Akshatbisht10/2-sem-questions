import math
n=int(input("enter the value of n:-"))
sum=0

for i in range(1,n+1):
    fact=1
    for j in range(1,i+1):
        fact=j*fact
    sum=sum+pow(i,i)/fact
print("the value of series is = ",sum)
