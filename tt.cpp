#include <iostream>

using namespace std;

int main(void){
    int k=3;
    int arr[4]={0,};
    for(int t=0;t<4;t++){
        for(int x=k;x<5;x++){
            arr[t]+=x;
        }
        k++;
    }
    for(auto i: arr){
        cout<<i<<' ';
    }
    cout<<endl;
}