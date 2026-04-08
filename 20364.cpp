#include <iostream>
#include <stack>
using namespace std;



int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    
    int *arr=new int[n+1];
    for(int i=0;i<=n;i++)
        arr[i]=0;//0 1 2 3 4 5 6

    for(int i=0;i<m;i++){
        stack<int> q;
        bool check=true;
        int num;
        int tmp;
        cin>>num;
        tmp=num;
        while(num>=1){
            q.push(num);//3 1
            num/=2;
        }
        while(!q.empty()){
            if(arr[q.top()]!=0){
                cout<<q.top()<<'\n';
                check=false;
                break;
            }
            q.pop();
        }
        if(check){
            cout<<0<<'\n';
            arr[tmp]=1;
        }
        while(!q.empty()){
            q.pop();
        }
    }
}