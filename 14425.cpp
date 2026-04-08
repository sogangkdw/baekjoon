#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


int main(void){
    int num1,num2,count=0;
    scanf("%d %d",&num1,&num2);
    getchar();
    vector<string> arr;
    string sen;
    for(int i=0;i<num1;i++){
        getline(cin,sen);
        arr.push_back(sen);
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<num2;i++){
        int start=0,end=num1-1;
        getline(cin,sen);
        while(start<=end){
            int mid=(start+end)/2;
            if(sen>arr[mid])
                start=mid+1;
            else if(sen<arr[mid])
                end=mid-1;
            else{
                count++;
                break;
            }
        }
    }
    printf("%d\n",count);
}