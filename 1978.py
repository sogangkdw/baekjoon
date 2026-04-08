def Primetest(num):
    if(num==1):
        return 0
    elif(num==2):
        return 1
    else:
        for x in range(2,num):
            if(num%x==0):
                return 0
                
        return 1


n=int(input())
num=map(int,input().split())

a=0
times=0
for k in num:
    
    times=Primetest(k)
    if (times):
       a+=1
       
print(a) 