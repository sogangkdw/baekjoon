#include <iostream>
using namespace std;

//영식 30초마다 10원
//민식 60초마다 15원
int main(void){
    int n,q1,q2,sum1=0,sum2=0;
    int num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        q1=num/30;
        q2=num/60;
        sum1+=10*(q1+1);
        sum2+=15*(q2+1);
    }
    if(sum1<sum2){
        cout<<"Y"<<' '<<sum1;
    }
    else if(sum1>sum2)
        cout<<"M"<<' '<<sum2;
    else
        cout<<"Y M"<<' '<<sum1;
    
}