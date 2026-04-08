#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int M;
    cin>>M;
    int arr[10]={};
    while(M>0){
        arr[M%10]++;
        M/=10;
    }
   
    arr[6]+=arr[9];
    arr[9]=0;
    
    if(arr[6]&1)
        arr[6]=(arr[6]+1)/2;
    else
        arr[6]/=2;
    cout<<*max_element(arr,arr+10)<<' ';
}
//6이랑 9은 각각 7,10번째
// 0 1 2 3 4 5 6 7 8 9
// 4 3 2