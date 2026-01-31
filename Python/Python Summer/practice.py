n= [ ]
r=int(input("Enter the number of element:"))
for i in range(0,r):
    ele=int(input())
    n.append(ele)
print(n)
sum=0
for i in n:
    if  (i%2==0):
        print(i,end=" ")
count=0
sum=0
for i in n:
    if (i%2!=0):
        count+=1
    if (i%2!=0):
        sum+=i
jl=sum*count
print('\n',jl)