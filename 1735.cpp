#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(void){
    int n1,n2,n3,n4;
    int GCD;
    int up,down;
    scanf("%d %d",&n1,&n2);
    scanf("%d %d",&n3,&n4);
    up=n1*n4+n2*n3;
    down=n2*n4;
    GCD=gcd(up,down);
    up/=GCD;
    down/=GCD;
    printf("%d %d\n",up,down);
    
}