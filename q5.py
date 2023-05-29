num=int(input("enter a number:- "))
print("************Output************")
if num%3==0 and num%5==0:
    print("Multiple of 3 and 5")
elif num%3==0:
    print("Multiple of 3")
elif num%5==0:
    print("Multiple of 5")