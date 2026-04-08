#include <iostream>
using namespace std;

int main(void){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int x,y;
    x=(c*e-b*f)/(a*e-b*d);
    y=(c*d-a*f)/(b*d-a*e);
    cout<<x<<' '<<y<<endl;
}