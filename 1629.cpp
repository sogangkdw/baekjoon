#include <iostream>

using namespace std;
long long a,b,c;

long long square(long long a, long long b){
    if(b==1)
        return a%c;
    else{
        long long x=square(a, b/2);
        if(b%2==0){
            return (x*x)%c;
        }
        else{
            return ((x*x)%c*a)%c;
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    cin>>a>>b>>c;
    cout<<square(a,b)<<'\n';
}