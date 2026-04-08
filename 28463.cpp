#include <bits/stdc++.h>
using namespace std;
string s;
string a,b,c;
int main(void){
    cin>>a;
    cin>>b>>c;
    s=a+b+c;
    if(s=="S.OP."||s=="EO..P"||s=="N.PO."||s=="WP..O") cout<<'T';
    else if(s=="SI..P"||s=="E.PI."||s=="NP..I"||s=="W.IP.") cout<<'F';
    else if(s=="SO..P"||s=="E.PO."||s=="NP..O"||s=="W.OP.") cout<<"Lz";
    else cout<<'?';
}