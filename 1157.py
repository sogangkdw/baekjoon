word=input("")
word2=""
size=len(word)
word2+=word.upper()
List=[]
for x in range(26):
    List.append(0)
for y in word2:
    List[ord(y)-ord('A')]+=1
cnt=1
max=0
maxindex=0
for z in range(len(List)):
    if List[z]>max:
        max=List[z]
        maxindex=z
        cnt=1
    elif List[z]==max:
        cnt=0
if cnt==1:
    print(chr(65+maxindex))
else:
    print("?")