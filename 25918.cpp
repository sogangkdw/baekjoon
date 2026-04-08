#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    stack<char> st;
    char sen[200001];
    int max=0,n;
    cin>>n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%c",&sen[i]);
    }
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(sen[i]);
        }
        else{
            if(st.top()==sen[i]){
                st.push(sen[i]);
                
            }

            else{
                
                st.pop();
            }
        }
        if(st.size()>max){
            max=st.size();
        }
    }
    if(st.empty()){
        printf("%d\n",max);
    }
    else{
        printf("%d\n",-1);
    }
}