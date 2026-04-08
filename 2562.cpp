#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[9];
    for(int i=0;i<9;i++){
        cin>>arr[i];
    }
    int* num=max_element(arr,arr+9);
    cout<<*num<<'\n';
    for(int i=0;i<9;i++){
        if(*num==arr[i])
            cout<<i+1;
        }
    return 0;
}