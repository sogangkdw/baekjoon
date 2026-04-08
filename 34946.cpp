#include <bits/stdc++.h>
using namespace std;
int A,B,C,D;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>A>>B>>C>>D;
    if(A+B<=D&&C<=D) cout<<"~.~";
    else if(A+B>D&&C>D) cout<<"T.T";
    else if(A+B>D&&C<=D) cout<<"Walk";
    else if(A+B<=D&&C>D) cout<<"Shuttle";
}