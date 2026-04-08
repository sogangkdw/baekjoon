#include<iostream>
using namespace std;
long long fi[91]={0,1,};//나머지는 다 0

long long fibonaci(int c){
    if(c==0||c==1)
        return fi[c];
    for(int c=2;c<91;c++){
        fi[c]=fi[c-1]+fi[c-2];
    }
    return fi[c];
}

int main(void){
    int c;
    cin>>c;
    cout<<fibonaci(c)<<endl;
}