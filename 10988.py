word=input("")
size=len(word)
x=0
string1=""
string2=""
while x<size:
    string1+=word[x]
    string2+=word[size-x-1]
    x+=1
if string1==string2:
    print(1)
else:
    print(0)

