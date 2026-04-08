#include <stdio.h>
#include <math.h>

int main(void){
    int n=0;
    scanf("%d",&n);
    int x1,y1,r1,x2,y2,r2;
    for(int x=0;x<n;x++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        if(x1==x2&&y1==y2){
            if(r1==r2)
                printf("%d\n",-1);
            else
                printf("%d\n",0);
        }
        else{
            double d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
            if(d>r1&&d>r2){
                if(d>r1+r2)
                    printf("%d\n",0);
                else if(d==r1+r2)
                    printf("%d\n",1);
                else
                    printf("%d\n",2);    
            }
            else{
                if(d<abs(r1-r2))
                    printf("%d\n",0);
                else if(d==abs(r1-r2))
                    printf("%d\n",1);
                else
                    printf("%d\n",2);  
            }
        }
    }
    return 0;
}