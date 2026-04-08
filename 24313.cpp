#include <iostream>
using namespace std;

int main(void){
    int a0,a1;
    int c;
    int n0;
    cin>>a0>>a1;
    cin>>c;
    cin>>n0;
    if(a0*n0+a1<=c*n0)
        cout<<1<<endl;
    else 
        cout<<0<<endl;
}