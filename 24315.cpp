#include <bits/stdc++.h>
using namespace std;
double a1,a0,c1,c2,n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a1>>a0>>c1>>c2>>n;
    if(c1-a1==0&&c2-a1!=0){
        if(a0<0) cout<<0;
        else{
            if(n>=(a0/(c2-a1))) cout<<1;
            else cout<<0;
        }
        return 0;
    }
    if(c1-a1!=0&&c2-a1==0){
        if(a0>0) cout<<0;
        else{
            if(n>=(a0/(c1-a1))) cout<<1;
            else cout<<0;
        }
        return 0;
    }
    if(c1-a1==0&&c2-a1==0){
        if(a0==0) cout<<1;
        else cout<<0;
        return 0;
    }
    if(a1>c1&&a1<c2){
        if(n>=(a0/(c1-a1))&&n>=(a0/(c2-a1))) cout<<1;
        else cout<<0;
    }
    else if(a1>c1&&a1>c2){
        if(n>=(a0/(c1-a1))&&n<=(a0/(c2-a1))) cout<<1;
        else cout<<0;
    }
    else if(a1<c1&&a1<c2){
        if(n<=(a0/(c1-a1))&&n>=(a0/(c2-a1))) cout<<1;
        else cout<<0;
    }
}