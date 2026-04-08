#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    vector<int> arr1;
    //vector<int> arr2;
    int num1,num2;
    int a;
    bool check;
    scanf("%d",&num1);
    for(int i=0;i<num1;i++){
        scanf("%d",&a);
        arr1.push_back(a);
    }
    
    sort(arr1.begin(),arr1.end());
    scanf("%d",&num2);

    for(int i=0;i<num2;i++){
        int start=0;
        int end=arr1.size()-1;
        scanf("%d",&a);
        check=false;
        while(start<=end){
            int mid=(start+end)/2;
            if(a<arr1[mid])
                end=mid-1;
            else if(a>arr1[mid])
                start=mid+1;
            else{
                printf("%d ",1);
                check=true;
                break;
            }
        }
        if(!check){
            printf("%d ",0);

        }
    }
    printf("\n");
}
    // for(int i=0;i<num2;i++){
    //     scanf("%d",&a);
    //     arr2.push_back(a);
    // }

    // for(int i=0;i<num2;i++){
    //     scanf("%d",&a);
    //     if(find(arr1.begin(),arr1.end(),a)!=arr1.end()){
    //         printf("%d ",1);
    //     }
    //     else
    //         printf("%d ",0);
    // }
    // printf("\n");

