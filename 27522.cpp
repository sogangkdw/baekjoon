#include <iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main(void){
int score[8]={10,8,6,5,4,3,2,1};
int record[8][4];
int min,sec,msec;
char team;
for(int x=0;x<8;x++){
    scanf("%d:%d:%d %c",&min,&sec,&msec,&team);
    record[x][0]=((min*60)+sec)*1000+msec;
    record[x][1]=team;
}
int tmp=0;
char temp;
int red=0,blue=0;
for(int x=1;x<8;x++){
    for(int y=0;y<8-x;y++){
        if(record[y][0]>record[y+1][0]){
            tmp=record[y][0];
            record[y][0]=record[y+1][0];
            record[y+1][0]=tmp;
            temp=record[y][1];
            record[y][1]=record[y+1][1];
            record[y+1][1]=temp;
                
        }
    }
}
for(int j=0;j<8;j++){
    if(record[j][1]=='R'){
        red+=score[j];
    }
    else
        blue+=score[j];
}
red>blue?cout<<"Red":cout<<"Blue";


}

