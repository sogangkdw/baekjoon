#include <iostream>
using namespace std;
#include <algorithm>

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,sum;
    int arr[10];
    fill(arr,arr+10,0);
    cin>>a>>b>>c;
    sum=a*b*c;
    while(sum>0){
        arr[sum%10]++;
        sum/=10;
    }
    for(int i:arr){
        cout<<i<<'\n';
    }
}