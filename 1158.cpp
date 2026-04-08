#include <iostream>
#include <queue>

using namespace std;

int main(void){
    queue<int> que;
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        que.push(i);
    }
    cout<<'<';
    while(!que.empty()){
        for(int i=1;i<b;i++){
            que.push(que.front());
            que.pop();
        }
        if(que.size()!=1){
            cout<<que.front()<<", ";
            que.pop();
        }
        else{
            cout<<que.front()<<">\n";
            que.pop();
        }
    }

}