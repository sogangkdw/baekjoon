#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque<int> deq;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        if(num==1){
            int a;
            cin>>a;
            deq.push_front(a);
        }
        else if(num==2){
            int a;
            cin>>a;
            deq.push_back(a);
        }

        else if(num==3){
            if(deq.empty()){
                cout<<-1<<'\n';
            }
            else{
                cout<<deq.front()<<'\n';
                deq.pop_front();
            }
        }

        else if(num==4){
            if(deq.empty()){
                cout<<-1<<'\n';
            }
            else{
                cout<<deq.back()<<'\n';
                deq.pop_back();
            }
        }

        else if(num==5){
            cout<<deq.size()<<'\n';
        }
        
        else if(num==6){
            if(deq.empty()){
                cout<<1<<'\n';
            }
            else
                cout<<0<<'\n';
        }

        else if(num==7){
            if(deq.empty()){
                cout<<-1<<'\n';
            }
            else{
                cout<<deq.front()<<'\n';
            }
        }

        else if(num==8){
            if(deq.empty()){
                cout<<-1<<'\n';
            }
            else{
                cout<<deq.back()<<'\n';
            }
        }
    }
}
