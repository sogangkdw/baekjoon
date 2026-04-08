#include <iostream>

using namespace std;

void add(int a,int b){
    cout<<a<<' '<<b<<'\n';
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    add(0,1);
    add(0,2);
    m-=2;
    for(int i=3;i<n;i++){
        if(m){
            m--;
            add(0,i);
        }
        else{
            add(i-1,i);
        }
    }
}