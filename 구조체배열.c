#include <stdio.h>

typedef struct coffee{
    char name[50];
    int price;
}coffee;

int main(void){
    coffee starbucks[3]={{"ICE AMERICANO",5000},{"ICE CAFELATTE",5500},{"ICE CHOCO",6000}};
    for(int i=0;i<3; i++){
        printf("%s-%d won\n",starbucks[i].name,starbucks[i].price);
    }

}