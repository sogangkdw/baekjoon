#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int> arr1;
    int num1,num2;
    bool check;
    scanf("%d",&num1);
    int k;
    for(int i=0;i<num1;i++){
        scanf("%d",&k);
        arr1.push_back(k);
    }
    sort(arr1.begin(),arr1.end());
    scanf("%d",&num2);
    for(int i=0;i<num2;i++){
        check=false;
        scanf("%d",&k);
        int start=0;
        int end=arr1.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(k>arr1[mid])
                start=mid+1;
            else if(k<arr1[mid])
                end=mid-1;
            else{
                check=true;
                printf("%d\n",1);
                break;
            }
        }
        if(!check){
            printf("%d\n",0);
        }
    }
    return 0;
}