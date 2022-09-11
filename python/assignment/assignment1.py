#To print factorial of any number.
# print("Enter the number to find its facotrial.")
# num=int(input())

# if(num>1):
#     fact=1
#     for i in range(1,num+1):
#         fact=fact*i
#     print("The factorial of",num,"is",fact)
# elif(num<0):
#     print("Factorial doesnot exist for negative numbers.")

# else:
#     print("The factorial of",num,"is 1")

#Fibonacci Series
a,b=0,1
count=0
print("Enter the number upto which you want Fibonacci Series.")
print()
num=int(input("Enter the number: "))
print()
print("The fibonacci sequence upto",num,"terms is:")
while(count<num):
    c=a+b
    print(a,end=" ")
    a=b
    b=c
    count+=1


