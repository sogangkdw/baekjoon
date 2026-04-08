#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    scanf("%d",&n);

    int findnum;
    scanf("%d",&findnum);

    int** snail=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        snail[i]=calloc(n,sizeof(int));
    }
    int x=n/2,y=n/2;

    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    int dir=0;
    /*화살표 이동 패턴이 1 1 2 2 3 3 4 4이다. 나는 이걸 두개씩 묶어서 2 4 6 8 10으로 만든 후 
     check가 count의 절반 혹은 그 수에 도달하면 방향을 바꾸는 코드를 만들었다. */
    int count=2;
    int check=0;

    for(int i=1;i<=n*n;i++){
        snail[x][y]=i;
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if(check==count/2){
            dir=(dir+1)%4;
            check++;
            nx=x+dx[dir];
            ny=y+dy[dir];
        }
        else if(check==count){
            count+=2;
            check=1;
            dir=(dir+1)%4;
            nx=x+dx[dir];
            ny=y+dy[dir];
        }
        else
            check++;
        x=nx;
        y=ny;
    }
    int x1=0,y1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(snail[i][j]==findnum){
                x1=i+1,y1=j+1;
            }
            printf("%d ",snail[i][j]);
        }
        printf("\n");
    }
    printf("%d %d\n",x1,y1);

    for(int i=0;i<n;i++){
        free(snail[i]);
    }
    free(snail);
}