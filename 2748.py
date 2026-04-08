fi=[]
for i in range(200):
    fi.append(0)
fi[1]=1


def fibonacii(a):
    if(a==0):
        return fi[a]
    elif(a==1):
        return fi[a]
   
    else:
        if(fi[a]!=0):
            return fi[a]
        else:
            fi[a]=fibonacii(a-1)+fibonacii(a-2)
            return fi[a]
    
    
    
    
a=int(input())
k=fibonacii(a)
print(k)