#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[10];//¿Œµ¶Ω∫ ¥„¿Ω
int num[10];
bool isused[10];
void func(int t){
    if(m==t){
        for(int i=0;i<m;i++){
            cout<<num[arr[i]]<<' ';
        }
        cout<<'\n';
        return;
    }
    int temp=0;
    if(t>0) temp=arr[t-1]+1;
    for(int i=temp;i<n;i++){
        arr[t]=i;
        func(t+1);
    }

}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>num[i];
    sort(num,num+n);
    func(0);
}