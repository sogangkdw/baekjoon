a,b=map(int,input().split())
numlist=[]
for x in range(1,a+1):
    if(a%x==0):
        numlist.append(x)
if(len(numlist)>=b):
    print(numlist[b-1])
else:
    print(0)