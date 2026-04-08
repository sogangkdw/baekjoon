#include <iostream>
using namespace std;

int main(void){
    int num1,num2,num3;
    while(1){
        cin>>num1>>num2>>num3;
        if(num1<num2+num3&&num2<num1+num3&&num3<num1+num2){
            if(num1==num2&&num1==num3)
                cout<<"Equilateral"<<endl;
            else if((num1==num2&&num1!=num3)||(num1==num3&&num1!=num2)||(num3==num2&&num3!=num1))
                cout<<"Isosceles"<<endl;
            else
                cout<<"Scalene"<<endl;
        }
        else if(num1==0&&num2==0&&num3==0)
            break;
        else
            cout<<"Invalid"<<endl;

    }
}