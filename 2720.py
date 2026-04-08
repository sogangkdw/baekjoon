times=int(input())
Quarter=25;Dime=10;Nickel=5;Penny=1

for _ in range(times):
    provide=[]
    money=int(input())
    while(money>0):
        if(money>=Quarter):
            provide.append(money//Quarter)
            money=money%Quarter
        else:
            provide.append(0)
            
        if (money>=Dime):
            provide.append(money//Dime)
            money=money%Dime
            
        else:
            provide.append(0)
            
        if (money>=Nickel):
            provide.append(money//Nickel)
            money=money%Nickel
            
        else:
            provide.append(0)
            
        if (money>=Penny):
            provide.append(money//Penny)
            break
        else:
            provide.append(0)
        
    for x in range(len(provide)):
        print(provide[x],end=' ')
    print()