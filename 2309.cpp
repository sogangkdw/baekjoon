#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    int n=0;
    int sum=0;
    for(int i=0;i<9;i++){
        cin>>n;
        v.push_back(n);
        sum+=n;
    }
    sum-=100;
    sort(v.begin(),v.end());

    for(int j=0;j<8;j++){
        for(int k=j+1;k<=8;k++){
            if(v[j]+v[k]==sum){
                v.erase(v.begin()+k);//큰 수부터 해야 erase 후 오류 안남
                v.erase(v.begin()+j);          
                for(auto it:v){
                    cout<<it<<'\n';
                }
                return 0;
            }
        }
    }
}