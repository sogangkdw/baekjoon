def matrix_sum(a,b,row,col):
    for i in range(row):
        for j in range(col):
            print(a[i][j]+b[i][j],end=' ')
        print()
    

row, column=map(int,input().split())
list1=[];list2=[]

for _ in range(row):
    num=list(map(int,input().split())) 
    list1.append(num)

    
for _ in range(row):
    num=list(map(int,input().split()))
    list2.append(num)

        
matrix_sum(list1,list2,row,column)
