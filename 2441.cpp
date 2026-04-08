#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
            cout<<' ';
        for(int k=n-i;k>0;k--)
            cout<<'*';
        cout<<'\n';
    }
    return 0;
}


//5¹ø(0 1 2 3 4)
//' ':0 1 2 3 4
//'*':5 4 3 2 1