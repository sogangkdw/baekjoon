#include <stdio.h>
int main(void){
    int N,max=0;
    float total=0;
    scanf("%d",&N);
    int score[N];

    for(int i=0;i<N;i++){
        scanf("%d",&score[i]);
        if (score[i]>=max)
            {
                max=score[i];
            }
    }

    for(int x=0;x<N;x++){
        total+=(float)score[x]/max*100;
    }
    printf("%f",total/N);
}
