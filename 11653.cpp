#include <iostream>
using namespace std;
int main(void){
    int num=0;
    int Q=0;
    cin>>num;
    int remain=0;
    while(num!=1){
        for(int x=2;x<=num;x++){
            if(num%x==0){
                Q=x;
                cout<<x<<endl;
                num/=x;        
                break;
            }
        }
    }

}