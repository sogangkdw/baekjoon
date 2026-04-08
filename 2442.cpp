#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<' ';
        }
        for(int k=1;k<2*(i+1);k++){
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