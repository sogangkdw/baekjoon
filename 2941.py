
S = list(input())

count = len(S)

for i in range(len(S)) :
    if i > 1 :
        if S[i] == '=' :
            if S[i - 1] == 'z' and S[i - 2] == 'd' :
                count = count - 2
            elif S[i - 1] == 'z' or S[i - 1] == 'c' or S[i - 1] == 's' :
                count = count - 1
        elif S[i] == '-' :
            if S[i - 1] == 'c' or S[i - 1] == 'd' :
                count = count - 1
        elif S[i] == 'j' :
            if S[i - 1] == 'l' or S[i - 1] == 'n' :
                count = count - 1
    elif i == 1 :
        if S[i] == '=' :
            if S[i - 1] == 'z' or S[i - 1] == 'c' or S[i - 1] == 's' :
                count = count - 1
        elif S[i] == '-' :
            if S[i - 1] == 'c' or S[i - 1] == 'd' :
                count = count - 1
        elif S[i] == 'j' :
            if S[i - 1] == 'l' or S[i - 1] == 'n' :
                count = count - 1

print(count)