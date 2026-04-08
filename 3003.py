fix=[1,1,2,2,2,8]
find=input().split()

for x in range(len(find)):
    find[x]=int(find[x])
    print("{}".format(fix[x]-find[x]),end=' ')