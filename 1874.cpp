#include <iostream>
#include <stack>

using namespace std;

int main(void){
    stack<int> q;
    char op[1000001];
    int n,idx=0,max=0;
    cin>>n;
    bool t=true;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        
        if(q.empty()){
            for(int j=max;j<k;j++){//1부터 도는게 아니라 max+1부터 push( 1 2 3 4 같은 순서 예시 )
                q.push(j+1);
                op[idx++]='+';
            }
            q.pop();
            op[idx++]='-';
        }
        else{
            if(q.top()==k){//top이 k랑 같으면 pop을 해줌
                q.pop();
                op[idx++]='-';
            }
            else if(q.top()>k){//top이 k보다 크면 NO
                
                t=false;
                
            }
            else{//top이 k보다 작으면 max+1부터 k까지 push하고 k는 pop
                for(int j=max+1;j<=k;j++){
                    q.push(j);
                    op[idx++]='+';
                }
                q.pop();
                op[idx++]='-';
            }
        }
        if(k>max){
            max=k;
        }
    }
    if(t){
        for(int t=0;t<idx;t++){
            cout<<op[t]<<'\n';
        }
    }
    else{
        cout<<"NO"<<'\n';
    }
}