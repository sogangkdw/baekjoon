#include <iostream>
using namespace std;

int main(void){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1<num2+num3&&num2<num1+num3&&num3<num1+num2){
        cout<<num1+num2+num3<<endl;
    }
    else{
        if(num1>num2+num3)
            cout<<2*(num2+num3)-1<<endl;
        else if(num2>num1+num3)
            cout<<2*(num1+num3)-1<<endl;
        else
            cout<<2*(num1+num2)-1<<endl;
    }
}