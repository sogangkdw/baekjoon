#include <iostream>
using namespace std;

int main(void){
    int a,b,c,d,e,f,g,h;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;
    a-c==0?g=e:((a-e==0)?g=c:g=a);
    b-d==0?h=f:((b-f==0)?h=d:h=b);
    cout<<g<<' '<<h;



}