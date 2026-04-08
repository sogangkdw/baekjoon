#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector <int> st;
    vector <int> sl;
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        st.push_back(a);
    }
    sort(st.begin(),st.end());
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sl.push_back(a);
    }
    sort(sl.begin(),sl.end(),greater<>());
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=st[i]*sl[i];
    }
    cout<<sum<<'\n';
    return 0;
}