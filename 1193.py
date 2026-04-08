n=int(input())
count=1
while(n>count):
    n-=count
    count+=1
    
if(count%2==0):
    a=n
    b=count+1-n
else:
    a=count+1-n
    b=n
print("{}/{}".format(a,b))   
