#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int op;
        cin>>op;
        if(op==1){
            int x;
            cin>>x;
            st.push(x);
        }
        else if(op==2){
            if(st.empty()){
                cout<<-1<<'\n';
            }
            else{
                cout<<st.top()<<'\n';
                st.pop();
            }
        }

        else if(op==3){
            cout<<st.size()<<'\n';
        }

        else if(op==4){
            cout<<st.empty()<<'\n';
        }

        else{
            if(st.empty()){
                cout<<-1<<'\n';
            }
            else{
                cout<<st.top()<<'\n';
            }
        }
    }
}
