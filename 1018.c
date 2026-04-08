#include <stdio.h>
#include <stdlib.h>
int height,width;

int Minimalcount(char (*arr)[50],int x,int y){
    int count1=0;
    int count2=0;
    //행+열이 짝/홀을 기준으로
    if(arr[y][x]=='W'&&(x+y)%2==0){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='B')
                    count1++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='W')
                    count1++;
            }
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='W')
                    count2++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='B')
                    count2++;
            }
        }
        
    }

    else if(arr[y][x]=='W'&&(x+y)%2==1){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='W')
                    count1++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='B')
                    count1++;
            }
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='B')
                    count2++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='W')
                    count2++;
            }
        }
    }

    else if(arr[y][x]=='B'&&(x+y)%2==0){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='W')
                    count1++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='B')
                    count1++;
            }
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='B')
                    count2++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='W')
                    count2++;
            }
        }
        
    }

    else if(arr[y][x]=='B'&&(x+y)%2==1){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='B')
                    count1++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='W')
                    count1++;
            }
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((x+y+i+j)%2==0&&arr[y+i][x+j]=='W')
                    count2++;
                else if((x+y+i+j)%2==1&&arr[y+i][x+j]=='B')
                    count2++;
            }
        }
    }
    return count1>count2?count2:count1;
}

int main(void){
    
    scanf("%d %d",&height,&width);
    
    // char** arr=(char**)malloc(sizeof(char*)*height);
    // for(int i=0;i<height;i++){
    //     arr[i]=(char*)malloc(sizeof(char)*width);
    // } 이거는 포인터배열임
    char arr[50][50];//배열 포인터

    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            scanf(" %c",&arr[i][j]);
        }
    }
    int count=64;
    
    for(int x=0;x<width-8+1;x++){
        for(int y=0;y<height-8+1;y++){
            int temp=Minimalcount(arr,x,y);
            if(count>temp){
                count=temp;
                
            }
        }
    }

    printf("%d\n",count);
    
}