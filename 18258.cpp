#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void){
    queue<int> que;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    cin.ignore();
    for(int i=0;i<num;i++){
        string op;
        cin>>op;
        if(op=="push"){
            int a;
            cin>>a;
            que.push(a);
            cin.ignore();
        }

        else if(op=="front"){
            if(que.empty()){
                cout<<-1<<'\n';
            }
            else
                cout<<que.front()<<'\n';
        }

        else if(op=="back"){
            if(que.empty()){
                cout<<-1<<'\n';
            }
            else
                cout<<que.back()<<'\n';
        }

        else if(op=="size"){
            cout<<que.size()<<'\n';
        }

        else if(op=="empty"){
            if(que.empty()){
                cout<<1<<'\n';
            }
            else{
                cout<<0<<'\n';
            }
        }

        else if(op=="pop"){
            if(que.empty()){
                cout<<-1<<'\n';
            }
            else{
                cout<<que.front()<<'\n';
                que.pop();
            }
        }
    }
}