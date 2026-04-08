alpha={'ABC':2,'DEF':3,'GHI':4,'JKL':5,'MNO':6,
       'PQRS':7,'TUV':8,'WXYZ':9}
word=input("")
sum=0
for x in range(len(word)):
    for key in alpha:
        if word[x] in key:
            sum+=alpha[key]
print(sum+len(word))