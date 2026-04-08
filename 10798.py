emp_list=[]
for x in range(5):  
    random=input()
    emp_list.append(random)
for column in range(15):
    for row in range(5):
        if column<len(emp_list[row]):
            print(emp_list[row][column],end='')

        
    