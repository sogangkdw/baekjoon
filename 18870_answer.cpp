#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    vector<long long> arr1;//sort하고 중복 제거 할 것
    vector<long long> arr2;//원본
    int N;
    int num;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&num);
        arr1.push_back(num);
        arr2.push_back(num);
    }
    sort(arr1.begin(),arr1.end());
    arr1.erase(unique(arr1.begin(),arr1.end()),arr1.end());//중복 제거

    for(int i=0;i<N;i++){
        cout<<lower_bound(arr1.begin(),arr1.end(),arr2[i])-arr1.begin()<<' ';
    }
    printf("\n");
}