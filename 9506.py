while(1):
    a=int(input())
    if(a==-1):
        break
    total=0
    L=[]
    for x in range(1,a):
        if(a%x==0):
            total+=x
            L.append(x)
    if(a==total):
        print("{} = ".format(a),end='')
        for k in range(len(L)):
            if(k!=len(L)-1):
                print("{} + ".format(L[k]),end='')
            else:
                print("{}".format(L[k]))
    else:
        print("{} is NOT perfect.".format(a))
    