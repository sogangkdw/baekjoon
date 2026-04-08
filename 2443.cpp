#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<' ';
        }
        for(int j=2*(n-i);j>1;j--){
            cout<<'*';
        }
        cout<<'\n';
    }
    return 0;
}

// *********
//  *******
//   *****
//    ***
//     *
// '*':9 7 5 3 1
// ' ':0 1 2 3 4