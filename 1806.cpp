#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int arr[101010];
    int p[101010];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        p[i]=p[i-1]+arr[i];
    }
   
    int i=0,j=0;
    int ans=101010;
    while(i<=a-1&&j<=a-1){
        if(p[j]-p[i-1]<b){
            j++;
        }
        else if(p[j]-p[i-1]>=b){
            ans=min(ans,j-i+1);
            i++;
        }
    }
    if(ans==101010){
        cout<<0<<'\n';
    }
    else
        cout<<ans<<'\n';
}