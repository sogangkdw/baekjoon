newlist=[]
for _ in range(9):
    num=list(map(int,input().split()))
    newlist.append(num)
    
max_num=newlist[0][0]
row=9;column=9
a=0;b=0
for i in range(row):
    for j in range(column):
        if newlist[i][j]>=max_num:
            max_num=newlist[i][j]
            a=i+1;b=j+1
print(max_num)
print("{} {}".format(a,b))