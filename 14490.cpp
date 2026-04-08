#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(void){
    string s1;
    getline(cin,s1);
    int idx=find(s1.begin(),s1.end(),':')-s1.begin();
    string s2=s1.substr(0,idx);
    string s3=s1.substr(idx+1);
    int a,b,c;
    a=stoi(s2);
    b=stoi(s3);
    if(a>=b)
        c=gcd(a,b);
    else
        c=gcd(b,a);

    cout<<a/c<<':'<<b/c<<'\n';
    return 0;
}