N, b = map(int,input().split())
ary = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
digit=[]
result=0
while(N>=b):
    remain=N%b
    digit.append(ary[remain])
    N=N//b
if(N<b):
    digit.append(ary[N])
for x in range(len(digit)):
    print(digit[len(digit)-x-1],end='')
    

