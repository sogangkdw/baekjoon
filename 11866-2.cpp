#include <iostream>
#include <queue>

using namespace std;
queue<int> que;



int main(void){
    
    int num,times;
    cin>>num>>times;
    for(int i=0;i<num;i++){
        que.push(i+1);
    }
   
    cout<<'<';
    while(!que.empty()){
        for(int i=1;i<times;i++){
            que.push(que.front());
            que.pop();
        }
        cout<<que.front();
        if(que.size()>1){
            cout<<", ";
        }
        que.pop();    
        
     }
     cout<<'>'<<'\n';
}