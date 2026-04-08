array=list(map(lambda _:[0]*100,range(100)))
total=0

num=int(input())
for _ in range(num):
   
    x,y=map(int,input().split())
    for row in range(x,x+10):
        for col in range(y,y+10):
            array[row][col]=1
    
for j in array:
    total+=j.count(1)
print(total)
    