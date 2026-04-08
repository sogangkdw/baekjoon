#include <iostream>
using namespace std;
int arr1[1000001]={};
bool arr2[2000001]={};

int main(void){
    int num=0;
    int sum=0;
    int count=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr1[i];
    }
    cin>>sum;
    for(int i=0;i<num;i++){
        if((sum-arr1[i]>0)&&arr2[sum-arr1[i]]){//범위 계산 먼저(아니면 sum-arr1[i]가 음수여서 arr2[negative] outoffbounds)
            count++;
        }
        arr2[arr1[i]]=1;
    }
    cout<<count;
}