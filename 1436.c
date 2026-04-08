#include <stdio.h>

int main(void){
    int n;
    scanf("%d\n",&n);
    int num=666;
    int count=0;
    int consec_six=0;
    while(1){
        int check_num=num;
        consec_six=0;
        while(check_num>0){
            if(check_num%10==6)
                consec_six++;
            else
                consec_six=0;
            if(consec_six==3){
                count++;
                break;
            }
            check_num/=10;
        }
        if(count==n)
            break;
        num++;
    }
    printf("%d\n",num);
}