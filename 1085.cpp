#include <iostream>
using namespace std;
int main(void){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    int num1,num2;
    if(w-x>=x)
        num1=x;
    else
        num1=w-x;
    if(h-y>=y)
        num2=y;
    else
        num2=h-y;
    num1>=num2?cout<<num2:cout<<num1;               
}