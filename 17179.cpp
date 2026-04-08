#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M,L;
    cin>>N>>M>>L;
    vector<int> v(M+1);
    for(int i=1;i<=M;i++){
        cin>>v[i];
    }

    for(int i=0;i<N;i++){
        int cnt;
        cin>>cnt;
        int left=0;
        int right=L;
        while(left<=right){
            int mid=(left+right)/2;
            int prev=0;
            int temp=0;
            for(int j=1;j<=M;j++){
                if(mid<=v[j]-prev){
                    temp++;
                    prev=v[j];
                }
            }


            if(temp==cnt&&L-prev<mid){
                right=mid-1;
            }
            else if(temp<cnt){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        cout<<right<<'\n';
    }
    
}