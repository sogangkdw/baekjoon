#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(void){
    set<int> st;
    int n;
    int k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        st.insert(k);
    }
    for(auto a:st){
        printf("%d ",a);
    }
    printf("\n");
}