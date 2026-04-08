#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++)
            cout<<' ';
        for(int j=2*(n-i);j>1;j--)
            cout<<'*';
        cout<<'\n';
    }

    for(int i=0;i<n-1;i++){
        for(int j=n-1-i;j>1;j--)
            cout<<' ';
        for(int k=1;k<2*(i+2);k++)
            cout<<'*';
        cout<<'\n';  
    }
}


// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********
// ' ': 3 2 1 0
// '*': 3 5 7 9
//  i :0 1 2 3