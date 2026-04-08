#include <bits/stdc++.h>

using namespace std;
 
int main(void){
    int num;
    stack<int> st;
    cin>>num;
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        if(n>0)
            st.push(n);
        else
            st.pop();
    }
    int sum=0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout<<sum<<'\n';
}