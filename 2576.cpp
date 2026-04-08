#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[7];
    int n=0;
    int min=100;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        if(!(arr[i]%2==0)) //if(arr[i]&1) 2진수에서 홀수는 마지막이 1로, 찍수는 0으로 끝남. 1&1은 T, 1&0은 0
        {
            n+=arr[i];
            if(arr[i]<min)
                min=arr[i];
        }
    }
    if(n==0)
        cout<<-1;
    else{
        cout<<n<<'\n';
        cout<<min;
    }
    return 0;
}