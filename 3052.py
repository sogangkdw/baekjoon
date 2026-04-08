A=[]
total=0
for i in range(10):
    a=int(input(""))
    a%=42
    if a not in A:
        A.append(a)
for i in range(len(A)):
    total+=1
print(total)
