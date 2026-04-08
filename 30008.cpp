#include <bits/stdc++.h>
using namespace std;

int n,people;
int arr[16];

void cal(int a){
    int grade=(a*100)/people;
    if(grade>=0&&grade<=4) cout<<1<<' ';
    else if(grade>4&&grade<=11) cout<<2<<' ';
    else if(grade>11&&grade<=23) cout<<3<<' ';
    else if(grade>23&&grade<=40) cout<<4<<' ';
    else if(grade>40&&grade<=60) cout<<5<<' ';
    else if(grade>60&&grade<=77) cout<<6<<' ';
    else if(grade>77&&grade<=89) cout<<7<<' ';
    else if(grade>89&&grade<=96) cout<<8<<' ';
    else if(grade>96&&grade<=100) cout<<9<<' ';
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>people>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cal(arr[i]);
    }
}