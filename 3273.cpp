#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[101010];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int M;
    cin>>M;
    sort(arr,arr+n);

    int i=0,j=n-1,count=0;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum>M){
            j--;
        }
        else if(sum<M){
            i++;
        }
        else{
            count++;
            i++;
        }
    }
    cout<<count<<'\n';
}