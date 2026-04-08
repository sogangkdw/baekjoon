#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    //Top
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<' ';
        }
        for(int k=1;k<2*(i+1);k++){
            cout<<'*';
        }
        cout<<'\n';
    }
    //Bottom
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<' ';
        }
        for(int k=2*(n-1-i);k>1;k--){
            cout<<'*';
        }
        cout<<'\n';
    }

}

//     *
//    ***
//   *****
//  *******
// *********

//' ':4 3 2 1
//'*':1 3 5 7 9(2n-1)

//  *******
//   *****
//    ***
//     *
// ' ':1 2 3 4
// '*':7 5 3 1
//   i:0 1 2 3 