a=[]
sum=0
n=int(input())
for i in range(0,n):
    b=int(input())
    a.append(b)
for i in range(0,n):
    if(a[i]<0):
        sum=sum+a[i]
print(sum) 
