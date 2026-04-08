#include <iostream>
#include <set>
using namespace std;

int main(void){
    int N;
    scanf("%d",&N);
    long long* arr1=new long long[N];
    long long* arr2=new long long[N];
    set<int> count;
    

    for(int i=0;i<N;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<N;i++){
        count.clear();
        for(int j=0;j<N;j++){
            if(arr1[i]>arr1[j]){
                count.insert(arr1[j]);
            }
        }
        arr2[i]=count.size();
    }
    
    for(int i=0;i<N;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    delete[] arr1;
    delete[] arr2;
}