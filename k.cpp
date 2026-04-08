#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    stack<char> st;
    char sen[200001];
    int max=0,n;
    int count=0;
    cin>>n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%c",&sen[i]);
    }
    for(int i=0;i<n;i++){
        if(st.empty()){
            if(count>=max)
                max=count;
            count=0;
            st.push(sen[i]);
            count++;
        }
        else{
            if(st.top()==sen[i]){
                st.push(sen[i]);
                count++;
            }

            else{
                if(count>=max)
                    max=count;
                count-=1;
                st.pop();
            }
        }
    }
    if(st.empty()){
        printf("%d\n",max);
    }
    else{
        printf("%d\n",-1);
    }
}